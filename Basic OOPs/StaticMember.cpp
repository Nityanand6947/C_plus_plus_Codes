#include<iostream>
using namespace std;

class Customer{

string name;
int accNo,balance;
static int totalCustomer; // if we initialise here then the value will get fixed for entire program.
static double totalAmount;

/*
Note:
    if the member is static then you can directly access that with reference because that member is directly from class.
        if i will not give static in block as to local variable then the count be same it will not get increment.

*/

public:
    Customer(string a,int b , int c){
    name = a;
    accNo = b;
    balance = c;
    totalCustomer++; // Whenever the constructor is called it will count it.
    totalAmount = totalAmount + this->balance;
    }

    static void acceStatic(){ //static member function

    cout<<totalCustomer<<endl;

    }

    void displayTotal(){

    cout<<"The total customer in the bank is : "<<totalCustomer<<endl;
    cout<<"Total amount in bank is : "<<totalAmount<<endl;

    }

    void displayDetails(){

    cout<<"Name : "<<name<<endl;
    cout<<"account Number : "<<accNo<<endl;
    cout<<"Balance : "<<balance<<endl;

    }
};

//datatype class_name :: variable to be initialised
int Customer::totalCustomer = 0; //Here :: is used to access global member and we are initialising here because it will keep on changing
double Customer::totalAmount = 0;

int main(){

Customer c1("Nitya",5,12000);
Customer c2("Dinesh",1,1000);
Customer c3("Rahul",4,15000);

//Customer::totalCustomer = 10; //Here you can't access the member directly because it is private so we need static function
//insted of above one use below one

//Customer::acceStatic();

//c1.totalAmount+=-11000; Directing access the member if private is there
//c1.displayDetails();
c2.displayTotal();

}
