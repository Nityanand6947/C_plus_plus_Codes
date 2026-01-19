#include <iostream>
#include <memory> // Include memory header for smart pointers

using namespace std;

class Atm
{
public:
    virtual void addMoney() = 0;
    virtual void withdrawMoney() = 0;
    virtual ~Atm() {} // Virtual destructor for proper cleanup
};

class A
{
private:
    class B : public Atm
    {
    public:
        void addMoney() override
        {
            cout << "Money was added" << endl;
        }
        void withdrawMoney() override
        {
            cout << "Money was debited" << endl;
        }
    };

public:
    // Change return type to unique_ptr
    unique_ptr<Atm> getAtm()
    {
        return make_unique<B>(); // Create and return a unique_ptr to B
    }
};

int main()
{
    A obj1;
    unique_ptr<Atm> optr = obj1.getAtm(); // Use unique_ptr to manage the object
    optr->addMoney();                     // Use the object
    optr->withdrawMoney();                // Use the object

    // No need to delete; unique_ptr automatically handles cleanup
}
