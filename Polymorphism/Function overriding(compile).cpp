//This is a example of function overriding when method name will be exactly same but implementation will be not overridden like java
#include<iostream>
using namespace std;

class Parent{
public:
    void GFG(){
    cout<<"Base function"<<endl;
    }

};

class Child: public Parent{
public:
    void GFG(){
    cout<<"Derived function"<<endl;
    }
};

int main(){

Child objC;
Parent objP;

objC.GFG();
objP.GFG();
}
