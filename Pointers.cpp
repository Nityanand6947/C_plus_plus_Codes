#include<iostream>
using namespace std; //we are using this for not getting conflict with the names of officially assigned keywords.

int main(){

int x; //variable declaration
int* myptr; //pointer variable

cout<<"Enter value"<<endl;
cin>>x;

//Here we are storing the address of the variable x in pointer
myptr = &x;

//printing the value of x
cout<<"Value of x is "<<x<<endl;

//printing the address stored in myptr pointer variable
cout<<"Address of stored myptr is : "<<myptr<<endl;

//printing the value of x using myptr pointer
cout<<"Value of x using myptr pointer is : "<<*myptr<<endl;

}
