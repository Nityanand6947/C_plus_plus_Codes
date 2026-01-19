#include<iostream>
using namespace std;


class complex{

private:
    int real,imag;

public:
/*
    complex(){
    real=0;
    imag=0;
    }
*/

//for c3 it is been used because it searching for default constructs.
complex(){};

    complex(int r,int i){
    real=r;
    imag=i;
    }

    void display(){
    cout<<real<<"+"<<imag<<" i "<<endl;
    }

    //operator overloading syntax
    complex operator+(complex c){
    complex temp;
    temp.real = real+c.real;
    temp.imag = imag+c.imag;
    return temp;
    }

    //This is overriding the << operator while giving cout << for display;
//friend ostream& operator<<(ostream& os, const complex& c) {
 //       os << c.real << "+" << c.imag << "i";
     //   return os;
  //  }

};

int main(){
complex c1(5,4);
complex c2(2,5);


complex c3 = c1+c2;
c3.display();

//c3 = c1+c2;
//cout<< c3 <<endl;

}
