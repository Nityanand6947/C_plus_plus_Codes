#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int,5> arr = {3,56,90,1,29};

    for(int i=0;i<arr.size();i++){
        if(arr[1]>arr[2])
            swap(arr[1],arr[2]);
        if(arr[2]>arr[3])
            swap(arr[2],arr[3]);
        if(arr[3]>arr[4])
            swap(arr[3],arr[4]);
        if(arr[4]>arr[5])
            swap(arr[4],arr[5]);
    }

    for(int ele:arr){
        cout<<ele<<" ";
    }
}