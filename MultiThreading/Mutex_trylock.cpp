/*
-try lock() tries to lock the mutex. Returns immmediately.
On successful lock acquisition retuns true otherwise return false.
-If try_block() is not able to lock mutex, then it doesn't get blocked that's why it is called
non-blocking
-If try_lock is called again by the same thread which owns the mutex, the behaviour is undeined(deadlock situation)
*/

#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

int counter = 0;
mutex mt;

void increaseTheCounterFor1000000Time(){
    //can i use try_lock here ?? IMP 
    //mt.lock();
    for(int i=0;i<100000;i++){
        if(mt.try_lock()){ //non-blocking call //use lock for 200000
            counter++; 
             mt.unlock();
    }
          //  mt.unlock();
    }
}
int main(){
    thread t1(increaseTheCounterFor1000000Time);
    thread t2(increaseTheCounterFor1000000Time);

    t1.join();
    t2.join();

    cout<<" counter could increase upto : "<<counter<<endl;
}
