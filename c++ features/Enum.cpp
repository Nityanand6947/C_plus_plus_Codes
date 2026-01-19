#include<iostream>
using namespace std;

enum class FOO {One, Two , Three};
enum class Bar {One, Two, Three};

int main(){

FOO f = FOO::One;

//if(Bar::One == FOO::One) Because both are different data types
 //   cout<<"Hi"<<endl;

if(static_cast<int>(FOO::Two) == static_cast<int>(Bar::Two))
    cout<<"Bye"<<endl;

    int x = static_cast<int>(FOO::One);
    int y = static_cast<int>(FOO::Two);
    int z = static_cast<int>(Bar::Three);

    cout<<"Value of x : "<<x<<endl;
    cout<<"Value of y : "<<y<<endl;
    cout<<"Value of z : "<<z<<endl;

    //system("Done Bro");


}
