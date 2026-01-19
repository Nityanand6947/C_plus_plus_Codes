//There are 5 different types to create thread in c++11 using callable objects

//Note:- We can create multiple thread at  a time but we can't guarantee which on will start first.

//Function pointer

#include<iostream>
#include<thread>
using namespace std;

// void fun(int x){
//     while(x-- > 0){
//         cout<<x<<endl;
//     }
// }
// int main(){
//     thread t(fun,10);
//     t.join();

// }


//Lambda function

// int main(){
//     //we can directly inject lambda at thread creation time.
//     auto fun = [](int x){
//         while(x-- > 0){
//             cout<<x<<endl;
//         }
//     };

//     thread t(fun,11);
//     t.join();
// }


//Functor(Function-objects
class Base{
    public:
    void operator()(int x){
        while(x-- > 0){
            cout<<x<<endl;
        }
    }
};
int main(){
    Base b;
    thread t(b,10);
    t.join();
}


//Non-static member function

// class Base{
// public:
//     void run(int x){
//         while(x-- > 0){
//             cout<<x<<endl;
//         }
//     }
// };
// int main(){
//     Base b;
//     thread t(&Base::run,&b,10); //&b for call the object of &Base::run
//     t.join();
// }


//static member function
class Base{
public:
    static void run(int x){
        while(x-- > 0){
            cout<<x<<endl;
        }
    }
};
int main(){
    thread t(&Base::run,10); //
    t.join();
}
