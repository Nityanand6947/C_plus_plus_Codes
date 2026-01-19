#include <iostream>
#include <string>
using namespace std;
 
class A{
    static A* instance;
    string messge;
    A(){
        this->messge="thia is A class object variable";
    }
 
    A(const A&)=delete;         //delete copy constructor
    A& operator=(const A&)=delete;      //delete = operator
 
    public:
    static A* getInstance(){
        if(instance==nullptr)
        instance=new A();
       
        return instance;
    }
    string getMessage(){
        return this->messge;
    }
    void setMessage(string message){
        this->messge=message;
    }
};
 
A* A::instance=nullptr;
 
int main(){
    A* obj=A::getInstance();
    cout<<obj->getMessage()<<endl;
    obj->setMessage("class a instance variable");
    cout<<obj->getMessage()<<endl;
 
    A* obj1=A::getInstance();
    if(obj==obj1){
        cout<<"both are same"<<endl;
    }
 
//    A obj2(*obj);             //we can create class using copy constructor
 
    // A a{};
    // cout<<a<<endl;
}