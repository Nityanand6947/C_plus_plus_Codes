#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    try{
       // if(b==0)
        //    throw "Dividing by zero will give runtime exception";

       // int c = a/b;
        cout<<a/b<<endl;
        }catch(const char *e){
            cout<<"Exception occured : "<<e<<endl;
        }

}
