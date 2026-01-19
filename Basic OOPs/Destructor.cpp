#include <iostream>
using namespace std;

class Customer
{
  string name;
  int *balance;

public:
  Customer()
  {
    name = "4";
    cout << "constructor is : " << name << endl;
  }
  Customer(string name)
  {
    this->name = name;
    cout << "constructor is : " << name << endl;
    // balance = new int; 
    //*balance = bal;
  }

  ~Customer()
  {
    cout << "Destructor is : " << name << endl;
    // delete balance;
  }

  void displayDetail()
  {
    cout << "Your name is : " << name << endl;
    // cout<<"Balance address "<<balance<<endl;
    // cout<<"Your balance is : "<<*balance<<endl;
  }
};

int main()
{
  Customer c1("1"), c3("2"), c4("3");
  Customer *c2 = new Customer;
  // c1.displayDetail();
  delete c2;
}
