//These are the examples of string manipulation
#include<iostream>
#include<string>
using namespace std;

void push_backDemo(string name3,string name4){
for(int i=0;name4[i]!='\0';i++){
    name3.push_back(name4[i]);
}
cout<<"\nAfter push Back ";
    cout<<name3;
}

int main(){

//For defining a string we have two ways:
string name1("Hello ! welcome to peopleTech");

//length function is used to find the length of the string.
cout<<"The length of the string is: "<<name1.length()<<endl;

//swap function is used to swap the character in the string
string s1 = "Bye" ;
string s2="Hello";

cout<<"\nBefore swapping"<<endl;
cout<<"The value of s1 : "<<s1<<endl;
cout<<"The value of s2 : "<<s2<<endl;

swap(s1,s2);

cout<<"\nAfter swapping"<<endl;
cout<<"The value of s1 : "<<s1<<endl;
cout<<"The value of s2 : "<<s2<<endl;


//size function is used to find the size of the string.
cout<<"\nThe size of string is : "<<name1.size()<<endl;


//resize function is resize the string .
string name2 = "Daily task have to be done...";
cout<<"\nBefore, The string : "<<name2<<" , The size is : "<<name2.size()<<endl;
name2.resize(10);
cout<<"After, The string : "<<name2<<" , The size is : "<<name2.size()<<endl;


//find function is used to find the part of the string
string word = "taskk";
//here size_t is unsigned value used to hold the non-negative value and it will return the positive value.
int found = name2.find(word);

cout<<"THe found is : "<<found<<endl;

if(found != string::npos){
        //it it is found then the position of the word is given to the user screen
    cout<<"\nThe word is in sentences at positions : "<<found<<endl;
}else{
    //Else it will give the random number to the user and a result
    cout<<"\nThe word is not in sentences : "<<endl;
}



//push back function is used to push the character or a word at the back of the string .
string name3 = "Nitya";
string name4 = "nand";
push_backDemo(name3,name4);

}
