#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

void printSquare(int x){
    cout<<x*x<<endl;
}

int main(){
    vector<int> vec = {1,2,3,4,5,6};

    for_each(vec.begin(),vec.end(),ptr_fun(printSquare));

}

