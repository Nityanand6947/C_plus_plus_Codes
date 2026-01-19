#include <iostream>

using namespace std;
class Atm
{
public:
    virtual void addMoney() = 0;
    virtual void withdrawMoney() = 0;

    
};

class A
{
private:
    class B : public Atm
    {
        void addMoney()
        {
            cout << "money was added" << endl;
        }
        void withdrawMoney()
        {
            cout << "money was debited" << endl;
        }
    };

public:
    Atm* getAtm() //B getAtm()
    {
        // B obj;
        //return &obj;
        return new B();
    }
};
int main()
{
    A obj1;
    Atm *optr = obj1.getAtm();
    optr->addMoney();
    optr->withdrawMoney();
    
    delete optr;
}