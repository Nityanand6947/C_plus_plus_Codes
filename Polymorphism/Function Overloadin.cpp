#include<iostream>
using namespace std;

class demo{

public:
    void func(int x){
    cout<<"The value of x is : "<<x<<endl;
    }

    void func(double x){
    cout<<"The value of x is : "<<x<<endl;
    }

    void func(int x,double y){
    cout<<"The value of x is : "<<x<<endl;
    cout<<"The value of y is : "<<y<<endl;
    }

};

int main(){

demo obj;
obj.func(24);
obj.func(90.0);
obj.func(23,56.78);

}
