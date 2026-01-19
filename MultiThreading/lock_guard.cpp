/*
It is very lightweight wrapper for owning mutex on scoped basis.
It acquires mutex lock the moment you create the objec the lock_guard.
It automatically remove the lock while goes out of the lock.
You cannot explicitly unlock the lock guard
You cannot copy lock guard

syntax:
    lock_guard<mutex> lock(m1)
*/
#include<iostream>
#include<mutex>
#include<thread>
using namespace std;

mutex m1;
int buffer = 0;

void task(const char* threadNumber , int loopFor){
   // m1.lock();
   lock_guard<mutex> lock(m1); // automatically unlock the mutex
    for(int i=0;i<loopFor;++i){
        buffer++;
        cout<<threadNumber<<" "<<buffer<<endl;
    }
    //m1.unlock();
}

 int main(){
    thread t1(task,"1",10);
    thread t2(task,"2",11);

    t1.join();
    t2.join();
 }

