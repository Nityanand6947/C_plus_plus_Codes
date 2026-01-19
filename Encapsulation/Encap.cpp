#include <iostream>
using namespace std;

class Demo
{
private:
    int a, b;
public:
    void setA(int x)
    {
        a = x;
    }

    int getA()
    {
        return a;
    }
    void setB(int y)
    {
        b = y;
    }

    int getB()
    {
        return b;
    }

public:
    void display()
    {   
        cout<<"\nFrom display function:"<<endl;
        cout << "The value of a: " << a << endl;
        cout << "The value of b: " << b << endl;
    }
};

int main(){
    Demo obj;
    obj.setA(45);
    obj.setB(100);

    cout<<"value of a :"<<obj.getA()<<endl;
    cout<<"value of b :"<<obj.getB()<<endl;

    obj.display();
}