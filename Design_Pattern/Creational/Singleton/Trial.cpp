#include <iostream>
#include <vector>
using namespace std;

class A
{
private:
    static A *instance;
    vector<int> container;
    A() {}

public:
    static A *getInstance()
    {
        if (instance == NULL)
        {
            return new A();
        }
        return instance;
    }
    void addData(const int &data)
    {
        container.push_back(data);
    }
    void display()
    {
        for (auto i : container)
        {
            cout << i << endl;
        }
    }
};
A *A::instance = nullptr;
int main()
{
    A *obj = A::getInstance();
    obj->addData(12);
    obj->addData(24);
    obj->addData(10);
    obj->addData(1);
    obj->display();

    // A obj2;
    // obj2.addData(100);
    // obj2.display();
}
