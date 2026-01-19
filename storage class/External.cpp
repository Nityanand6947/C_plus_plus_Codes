#include<iostream>
using namespace std;

//file2.cpp(External2.cpp)
//Declaration of the external variable
extern int globalVar;

// Declaration of the function defined in external2.cpp
void displayGlobalVar();

void changeGlobalVar(){
globalVar = 100;
cout<<"Global variable : "<<globalVar<<endl;

}

int main(){
displayGlobalVar(); //from External2.cpp
changeGlobalVar(); //change the value
displayGlobalVar(); //display the new value
}

