#include<iostream>
using namespace std;

int main(){
    int age;
    double salary;

    cout<<"Enter your age";
    while(!(cin>>age)){ //This while loop will work until the user won't give integer data type
        cout<<"Input input. Please enter a int type value"<<endl;
        cin.clear(); //clear the error flag
        cin.ignore(100,'\n'); //Ignore the invalid input
    }

    cout<<"Enter you salary";
    while(!(cin>>salary)){//This while loop will work until the user won't give integer data type
         cout<<"Input input. Please enter a number type value"<<endl;
        cin.clear(); //clear the error flag
        cin.ignore(100,'\n'); //Ignore the invalid input
    }

    cout<<"Your age is : "<<age<<endl;
    cout<<"Your salary is : "<<salary<<endl;
}