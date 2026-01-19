#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a;
    cout<<"Enter number"<<endl;
    cin>>a;
    cout<<"The setfill result : "<<endl;
    cout<<setw(10)<<setfill('_')<<a<<endl;
}
