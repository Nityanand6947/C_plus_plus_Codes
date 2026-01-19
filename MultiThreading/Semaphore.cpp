/*
It is signaling or guidance
*/
#include<iostream>
#include<chrono>
#include<semaphore.h>
#include<thread>
using namespace std;

/*
-global binary semaphore instance
-objects counts are set to zero
-objects are in non-signa;ed state
*/
//binary_semaphore
//    smphSignalMainToThread{0},
//    smphSignalThreadToMain{0};

void ThreadProc(){
    // wait for a signal from the main proc
    //by attempting to decrement the semaphore
    smphSignalMainToThread.acquire();

    //this call blocks until the semaphore's count
    //is increased from the main proc
    cout<<"[thread] got the signal\n"; //response message

    using namespace std::literals;
    this_thread::sleep_for(3s);

    cout<<"[thread] send the signal\n"; //message

    //signal the main proc back
    smphSignalThreadToMain.release();
}
int main(){
    //create some worker thread
    thread thrWorker(ThreadProc);

    cout<<"[main] send the signal\n"; //message

    //signal until the worker thread is done doing the work
    //by attempting to decrement the semaphore's count
    smphSignalMainToThread.release();

    //wait until the worker thread is done doing the work
    //by attempting to decrement the
    smphSignalThreadToMain.acquire();

    cout<<"[main] got the signal\n"; //response message
    thrWorker.join();
}
