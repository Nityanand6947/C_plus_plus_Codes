#include<iostream>
using namespace std;

class Human{
//Every modifiers can be accessed in the same class without any issue
private:
    int a;
protected:
    int b;
public :
    int c;

    void fun(){
    a = 10;
    b = 20;
    c = 30;
    cout<<"Values are : "<<a<<" "<<b<<" "<<c<<endl;
    }
};

int main(){
Human nitya;

nitya.fun();

}
