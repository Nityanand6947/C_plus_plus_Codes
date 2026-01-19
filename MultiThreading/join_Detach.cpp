/*
JOIN
-Once a thread is started we wait for this to finish by calling join() function on thread object.
-Double join will result in program termination
-If needed we should check thread is joinable before joining(using joinable() function)

Detach
-This is used to detach newly created thread form the parent thread.
-Always check before detaching a thread that it is joinable otherwise we may end up double detaching and double
    detach() will result in program terminate.
-If we detach and main function is returning then the detach thread execution will suspend.

[NOTES]
Either join() or detach() should be called on thread object , otherwise during thread objects destructor will terminate the program
Because inside destructor  it checks if thread is still joinable ? if yes then it terminates the progrma
*/
#include<iostream>
#include<chrono>
#include<thread>
using namespace std;

void run(int count){
    while(count-- > 0){
        cout<<count<<" Nitu "<<endl;
    }
       // this_thread::sleep_for(chrono::seconds(3));
        cout<<"Thread finished"<<endl;
}

int main(){ //also knows as parent thread

    thread t(run,10);
    cout<<"main before\n"<<endl;
    /*
    t.join();
   // t.join(); It will crase
   if(t.joinable())
    t.join();*/


    t.detach(); //main will not wait for that thread to create
   // t.detach(); crash
    cout<<"\nmain after"<<endl;
    //this_thread::sleep_for(chrono::seconds(3));
}
