#include<iostream>
using namespace std;

static int count; //Here it is global static

void globalStatic(){
count++;
cout<<"The global count is : "<<count<<endl;
}

void staticStorage(){
static int count = 0; //Here it is local static
count++;
cout<<"The local count is : "<<count<<endl;
}

int main(){

staticStorage();
staticStorage();
staticStorage();

globalStatic();
globalStatic();

}
