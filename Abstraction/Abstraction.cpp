#include<iostream>
using namespace std;

class ImpAbstraction{
private:
    int a,b;

public:
    void set(int x,int y){
    a = x;
    b = y;
    }

    void display(){

    cout<<"The value of a is : "<<a<<endl;
    cout<<"The value of b is : "<<b<<endl;

    }

};

int main(){

ImpAbstraction obj;
obj.set(10,20);
obj.display();

}
