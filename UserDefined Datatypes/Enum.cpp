#include<iostream>

using namespace std;



enum GeeksForGeeks {Geek1,Geek2,Geek3};



//GeeksForGeeks G1 = Geek1;

GeeksForGeeks G2 = Geek2;

GeeksForGeeks G3 = Geek3;



int main(){

    cout<<"The assigned value is : "<<GeeksForGeeks::Geek1<<endl;

    cout<<"The assigned value is : "<<G2<<endl;

    cout<<"The assigned value is : "<<G3<<endl;

}
