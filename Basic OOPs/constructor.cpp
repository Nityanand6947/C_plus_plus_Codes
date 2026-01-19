#include<iostream>
using namespace std;

class Customer{

string name;
int accNo;
int balance;

public:
    Customer(){} //Default constructor , It is hidden added by the compiler and automatically invoked during object creation
    Customer(string na,int acc,int bal){ //Parameterised constructor
        //When formal argument name is same and global members then we have to use this pointer
        //this->name or (*this).name
        name = na;
        accNo = acc;
        balance = bal;

    }
    Customer(string name,int acc){ //Constructor overlaoding
    this->name = name;
    this->accNo = acc;
    }

    inline Customer(string n):name(n){}; //inline constructor (use "inline" keyword to use this but not mandatory)

    /*
    Customer(Customer &obj){ //Here if & is not used then customer will call copy constructor to copy then again and again so to get the real one we use &
    name = obj.name;
    accNo = obj.accNo;
    balance = obj.balance
    }

    */

    void displayDetails(){
    cout<<"\nYour name is : "<<name<<endl;
    cout<<"Your account number is : "<<accNo<<endl;
    cout<<"Your balance is : "<<balance<<endl;

    }


};

int main(){

Customer c1("Nitya",456754,15400);
Customer c2("Bhushan",876543);
Customer c3("Dev");
Customer c4(c1); //Copy Constructor or Customer c4=c1;
c1.displayDetails();
c2.displayDetails();
c3.displayDetails();
c4.displayDetails();
}
