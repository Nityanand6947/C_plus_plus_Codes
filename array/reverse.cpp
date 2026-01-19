#include<iostream>
using namespace std;

int main(){

int arr[5] = {9,5,1,8,2};

for(int i=0;i<=1;i++){
    swap(arr[i],arr[4-i]);
}

cout<<"The reverse of array is : "<<endl;
for(int i=0;i<5;i++){
    cout<<arr[i]<<endl;
}

}
