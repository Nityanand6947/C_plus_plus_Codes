/*
-Thread or Process synchronize to access critical section
-Critical section is one or collection of program statements which should
be executed by only one thread or process at a time
*/
#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

long long bankBalance = 0;
mutex mt;

void addMoney(long long val){
    mt.lock();
    bankBalance+=val;
    mt.unlock();
}
int main(){
    thread t1(addMoney,100);
    thread t2(addMoney,200);

    t1.join();
    t2.join();

    cout<<"Final Bank Balance : "<<bankBalance<<endl;
}
