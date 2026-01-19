#include<iostream>
using namespace std;

template<size_t N>
void linear_Search(int (&data)[N],int value){
    bool found = false;
    for (size_t i = 0; i < N; i++) {
        if (data[i] == value) {
            cout << "Element is present at index " << i << endl;
            found = true;
            break; // Stop searching if the element is found
        }
    }

    if (!found) {
        cout << "Element is not present." << endl;
    }

}

int main(){
    int targetValue;
    cout<<"Enter the target value : ";
    cin>>targetValue;

    int arr[5] = {12,90,31,87,33};

    linear_Search(arr,targetValue);


}