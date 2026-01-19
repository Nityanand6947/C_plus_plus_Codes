#include<iostream>
#include<thread>
using namespace std;

void run(int a){
    for(int i=0;i<=10;i++){
        cout<<"Hi"<<" from "<<a<<" "<<i<<endl;
    }
}



int main(){
    thread t1(run,1);
    thread t2(run,2);

   // t1.join();
   // t2.join();
}