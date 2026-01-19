#include<iostream>
using namespace std;

class Customer{
string name;
int balance,acc_no;

public:
    Customer(string name,int balance,int acc_no){
    this->name=name;
    this->balance=balance;
    this->acc_no=acc_no;
    }

    //deposit
    void deposit(int amount){
    if(amount>0){
            balance+=amount;
        cout<<amount<<" is credited successfully"<<endl;
    }else{
        throw "Amount should be greater then low";
    }
    }

    //withdraw
    void withdraw(int amount){
        if(amount>0 && amount<=balance){
            balance-=amount;
            cout<<amount<<" is debited successfully"<<endl;

        }
        else if(amount<0){
            throw "Amount should be grater then 0";
        }else{
            throw "You balance is low";
        }
     }
};
int main(){
Customer c1("Nitya",10000,1);

try{
    c1.deposit(5000);
c1.withdraw(20000);
}catch(const char *e){
    cout<<"Exception occured : "<<e<<endl;
}

}
