#include<iostream>
#include<memory>
using namespace std;

class B; //Forward Declaration

class A{

public:
    shared_ptr<B> bptr; //shared pointer to B

    A(){
    cout<<"A constructor called "<<endl;
    }

    ~A(){
    cout<<"A destroyed"<<endl;
    }

};

class B{

public:
    shared_ptr<A> aptr; //shared pointer to A

    B(){
    cout<<"B constructor called "<<endl;
    }

    ~B(){
    cout<<"B destroyed"<<endl;
    }

};

int main(){

shared_ptr<A> a = make_shared<A>();
shared_ptr<B> b = make_shared<B>();

//Establishing circular dependency

a->bptr = b;
b->aptr = a;

}
