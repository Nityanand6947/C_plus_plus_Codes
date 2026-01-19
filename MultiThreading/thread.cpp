/*
A thread is also knows as lightweight process
example:
    The browser has multiple tab that can be different tabs.
    Ms word must be using multiple threads, one thread to format the text, another thread to process the inputs.
    Visual Studio code editor would be using threading for auto completing the code.

Ways to create thread:
-Function pointer
-Lambda functions
-Functors
-Member Functions
-Static Member function
*/
#include <iostream>
#include <thread>
#include <chrono>
#include <algorithm>
using namespace std;
using namespace std::chrono;
typedef long long int ull;
void findEven(ull start, ull end, ull *EvenSum)
{
    for (ull i = start; i <= end; ++i)
    {
        if (!(i & 1))
        {
            *(EvenSum) += i;
        }
    }
}
void findOdd(ull start, ull end, ull *OddSum)
{
    for (ull i = start; i <= end; ++i)
    {
        if (i & 1)
        {
            (*OddSum) += i;
        }
    }
}
int main()
{
    ull start = 0, end = 1900000000;
    ull OddSum = 0;
    ull EvenSum = 0;

    auto startTime = high_resolution_clock::now();

    // // WITH THREAD
    thread t1(findEven, start, end, &(EvenSum));
    thread t2(findOdd, start, end, &(OddSum));

    t1.join();
    t2.join();

    //  //WITHOUT THREAD
    // findEven(start,end, &EvenSum);
    // findOdd(start, end, &OddSum);

    auto stopTime = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stopTime - startTime);

    cout << "OddSum : " << OddSum << endl;
    cout << "EvenSum : " << EvenSum << endl;
    cout << "Sec: " << duration.count() / 1000000 << endl;
    return 0;
}
/*
#include<iostream>
#include<thread>
#include<chrono>
#include<algorithm>
using namespace std;
using namespace std::chrono;

typedef unsigned long long ull;

ull OddSum = 0;
ull EvenSum = 0;

void findOdd(ull start,ull end){
    for(ull i=start;i<=end;++i){
        if((i&1)==1){
            OddSum+=i;
        }
    }
}
void findEven(ull start,ull end){
    for(ull i=start;i<=end;++i){
        if((i&1)==1){
            EvenSum+=i;
        }
    }
}

int main(){
    //Finding all sum of odd between 0 to 1900000000 and even between that number .
ull start = 0,end = 1900000000;

auto startTime = high_resolution_clock::now();

thread t1(findEven, start, end);
thread t2(findOdd, start, end);

//join means joining thread with main thread
//If you dont use join then as main thread stops the thread will get terminated and
//gives value how much its done its process But with thread all three will work parallely and
//complete all thread and then gets terminated
t1.join();
t2.join();

//findOdd(start,end);
//findEven(start,end);

auto stopTime = high_resolution_clock::now();
auto duration = duration_cast<microseconds>(stopTime - startTime);

cout<<"OddSum : "<<OddSum<<endl;
cout<<"EvenSum : "<<EvenSum<<endl;

cout<<duration.count()/1000000<<" sec"<<endl;
}

*/
