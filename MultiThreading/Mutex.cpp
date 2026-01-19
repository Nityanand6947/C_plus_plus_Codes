/*
Mutex: Mutal exclusion

Race Condition
Race condition is a situation where two or more threads/process happend to change a
common data at the same time.
-If there is a race condition then we have to protect it and the protected section is
called critical section.region.

-Mutex is used to avoid race conditon
We use lock(), unlock() on mutex to avoid race condition.
*/
#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

int myAmount = 0;

mutex m;

void addMoney(){
    /*
    t1 is using then t2 will get blocked and after use it will unlock
    */
    m.lock();//blocking call
    ++myAmount;//critical region/section
    m.unlock();
}
int main(){
    thread t1(addMoney);
    thread t2(addMoney);

    t1.join();
    t2.join();

    cout<<myAmount<<endl;
}
