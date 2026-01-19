#include<iostream>
#include<string>
using namespace std;

template <int N , typename T>
class Array{

private:
    T m_Array[N];
public:
    int GetSize() const{
    return N;
    }

};

int main(){
Array<5,double> arr;

cout<<"The size of array is : "<<arr.GetSize()<<endl;
}

