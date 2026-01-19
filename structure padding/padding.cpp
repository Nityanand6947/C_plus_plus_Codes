//What is structural padding and packing in c/c++
//It is a way to speed up cpu optimization

#include<iostream>
using namespace std;

struct Base{
char a;
char b;
int i;
char c;
};
int main(){
cout<<sizeof(Base)<<endl;
}
