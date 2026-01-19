#include<iostream>
#include<iomanip>
#include<bitset> //for binary representation
using namespace std;

int main(){
    int n; //decimal are integers and float
    cout<<"Number : ";
    cin>>n;
    cout<<"This is hexadecimal value : "<<setbase(16)<<n<<endl;
    cout<<"hexadecimal representation : "<<hex<<n<<endl;
    cout<<"This is octal value : "<<setbase(8)<<n<<endl;
    cout<<"octal representation : "<<oct<<n<<endl;
    cout<<"Binary representation : "<<bitset<32>(n)<<endl;

}