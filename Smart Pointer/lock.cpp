#include <iostream>
#include <memory>

using namespace std;
int main(){
    //shared pointer x got initialized by int = 10
shared_ptr<int> x(new int(10));
//weak pointer y got initialised by the value of x as (int 10)
weak_ptr<int> y=x;
//Here printing the value of shared pointer x
cout<<*x<<endl; //10
//Here weak pointer y is changed to shared pointer y
auto s=y.lock();
cout<<*s<<endl; //10
cout<<x.use_count()<<endl; //2

}
