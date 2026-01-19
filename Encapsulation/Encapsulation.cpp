#include<iostream>
using namespace std;

class temp{ //It si a class with name temp
    //below are the variables a and b;
int a;
int b;

public: //This is access modifiers which gives scope to the function
    int solve(int input){ //This is function name solve()
    a = input;
    b = a/2;
    return b;
    }

};

int main(){
int n;
cout<<"Enter the value of n : "<<endl;
cin>>n;

temp half; // here half is instance of temp blueprint class
int result = half.solve(n); // with the help of instance we are accessing the solve function.
cout<<"The answer is : "<<result<<endl;

}

