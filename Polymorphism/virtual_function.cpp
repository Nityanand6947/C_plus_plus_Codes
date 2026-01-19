//This is a virtual overriding when the base class of method is overridden by derived class.
#include<iostream>
using namespace std;

class Base{
public:
//Declare the function as virtual to allow overriding in derived class
virtual void display(){
cout<<"display method of base class"<<endl;
}

//virtual destructor to ensure proper cleanup of derived class objects
virtual ~Base(){}

};

class Derived : public Base{
public:
    //override the display method
    void display() override{
    cout<<"Display method of derived class";
    }
};

int main(){
  
Base* baseptr;
Derived drObj;

//point base class pointer to derived class object
baseptr = &drObj;

//call the display function
//This will call the display method of derived class
//class due to virtual function mechnasim
baseptr->display();

//Derived *drObj;
//Base baseptr;

//drObj = &baseptr;

//drObj->display();



// Base *b;
// Base b1;
// b=&b1;
// b->display();



}
