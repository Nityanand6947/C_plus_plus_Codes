#include <iostream>
using namespace std;
 
template <typename t,typename t1>
class A{
    public:
    t value1;
    t1 value2;
    public :
   
    A(t value1,t1 value2){
        this->value1=value1;
        this->value2=value2;
    }
 
    A operator+(A &a){
        A temp;
        temp.value1=value1+a.value1;
        temp.value2=value2+a.value2;
        return temp;
    }
  
    void operator()(t value1,t1 value2){
    cout<<this->value1+value1<<" ";
    cout<<this->value2+value2<<endl;
    
    }
 
};
 
int main(){
    A <int,double>a1(10,20.0);
    a1(200,400);
   // A <int,double>a2(30,10.0);
    //A <int,double>a3;
   // a3=a1+a2;
    //cout<<a3.value1<<"   "<<a3.value2<<endl;
   
    //a2(200.798,777.789);
}