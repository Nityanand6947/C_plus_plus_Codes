/*
syntax:
    unique_lock<mutex> lock(m1)

Notes:
    The class unique_lock is a mutex ownership wrapper

It allows :
    can have different locking strategies
    time - constrained attempts at locking (try_lock_for, try_lock_until)
    recursive locking
    transfer to lock ownership(move not copy)
    condition variables

Locking strategies
    Type                  Effects
    defer_lock          do not acquire ownership of the mutex
    try_to_lock         try to acquire ownership of the mutex without blocking
    adopt_lock          assume the calling thread already has the ownership of the mutex
*/

#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

mutex m1;
int buffer = 0;

//EXAMPLE:1
/*
void task(const char* threadNumber, int loopFor){
    unique_lock<mutex> lock(m1); //Automatically calls lock mutex m1 , created in stack so automatically destructor will unlock m1
    for(int i=0;i<loopFor;++i){
        buffer++;
        cout<< threadNumber <<" "<< buffer <<endl;   
    }
}
*/

//EXAMPLE:2

void task(const char* threadNumber,int loopFor){
    unique_lock<mutex> lock(m1,adopt_lock); // Does not call lock on mutex m1, because used defer_lock
    /*Thsi is owning the lock but not locking so after that you can write n number of codes and then lock it*/
    lock.lock(); //But then we will have to explicitly tell to lock whenever we want to lock mutex m1
    for(int i=0;i<loopFor;++i){
        buffer++;
        cout<<threadNumber<<" "<<buffer<<endl;
    }
    //lock.unlock(); is not needed as it will be unlocked in destructor of unique_lock
}

int main(){
    thread t1(task,"T1",10);
    thread t2(task,"T2",10);
    t1.join();
    t2.join();
}
/*
Try_to_lock()
Description: This option attempts to acquire a lock without blocking.
If the mutex is already locked by another thread, try_to_lock will not wait; instead, it will return immediately, allowing the program to continue execution.


defer_lock()
Description: This option is used when you want to create a lock object without immediately acquiring the lock. You can later acquire the lock manually when you're ready.
 It’s useful for managing the timing of lock acquisition, especially in more complex locking scenarios.

 void threadFunction() {
    if (mtx.try_lock()) {
        // Successfully acquired the lock
        // Perform some work
        mtx.unlock();
    } else {
        // Lock was not acquired
        // Handle the case where the mutex is already locked
    }
}

 adopt_lock()
 Description: This option is used when you want to indicate that the lock object already owns the lock (i.e., the lock is already held by the calling thread).
  It’s useful in situations where you want to manage lock ownership without trying to lock it again.

  void threadFunction() {
    mtx.lock(); // Assume the lock is acquired here
    std::unique_lock<std::mutex> lock(mtx, std::adopt_lock);
    
    // Perform work with the lock held
    // No need to call lock() again; it’s already held
    // lock will automatically unlock when it goes out of scope
}
*/