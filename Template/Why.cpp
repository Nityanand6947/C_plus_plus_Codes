#include<iostream>
#include<string>
using namespace std;

void print(int value){
cout<<"I'm int value : "<<value<<endl;
}

void print(string value){
cout<<"I'm string value : "<<value<<endl;
}

void print(float value){
cout<<"I'm float value : "<<value<<endl;
}

int main(){

print(12); // int
print("Nitya");
print(34.56f);

}
