#include<iostream>
#include<string>
using namespace std;

//NOTE: template doesn;t exists until we call them

template <typename T>
//template <class N> //This will also work but more prefer using typename
//Here this T will change according to the actual values passed there.How amazing
void print(T value){
cout<<"I'm more then generic value : "<<value<<endl;
}

int main(){

print(12);
//print<double>(90.45);  Not prefer generally
print("Nitya");
print(34.56f);

}
