#include<iostream>
#include<exception>
using namespace std;

int main(){

try{
    int *p = new int[100000000000000]; //allocating memory that is exceeding the heap area
    //int *p = new int[1000]; //allocating memory that is available in heap area.
    cout<<"Memory allocation is successfull"<<endl;
    delete []p;
}catch(const char &e){
    cout<<"Exception occured : "<<e<<endl;
}


}
