#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double a;
    cout<<"Enter number"<<endl;
    cin>>a;
    cout<<"The setPrecision result : "<<endl;
    cout<<"Precision will count from left side to right side : "<<endl;
    cout<<setprecision(3)<<a<<endl;
    cout<<setprecision(5)<<a<<endl;
    /* 
    cout<<setprecision(3)<<a<<endl;
    If you give 12.678 then it will give 12.6 
    And you give 123.678 then it will give 123
    But you give 12345678.6578 then it will give some exponential like 1.23e+08

    Similarly
    cout<<setprecision(5)<<a<<endl;
     If you give 127.678 then it will give 127.67
    And you give 24.6789087 then it will give 24.678
    But you give 903276.6578 then it will give some exponential like 9.03e+08
    */
}
