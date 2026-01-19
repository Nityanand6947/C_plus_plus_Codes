#include <iostream>
using namespace std;

class A
{

     string name;
     int tenth;
     int twelfth;

public:
     A(string name, int tenth)
     {
          this->name = name;
          this->tenth = tenth;

          cout << "Name : " << name << endl;
          cout << "tenth : " << tenth << endl;
     }

     A(int twelfth) : A("Nitya", 76)
     { // Here constructor chaining has been done.
          this->twelfth = twelfth;
          cout << "twelfth : " << twelfth << endl;
     }
};

int main()
{
     // A a1("Dilip",78);
     A a2(90);
}
