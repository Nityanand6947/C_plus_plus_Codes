#include<iostream>
using namespace std;

class Add{
    public:
    int x;

    public:
    Add(int num): x(num){}

    //overloading the function call operator
    int operator()(int y) const{
        return x+y;
    }
};

int main(){

    Add addFive(5);
    cout<<"5 + 10 = "<<addFive(10)<<endl;
    cout<<"value of x = "<<addFive.x<<endl;
}