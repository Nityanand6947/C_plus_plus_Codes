/*
Copy

*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    // Part 2: Swapping Elements
    
    int a = 5, b = 10;
    
    // swap
    swap(a, b);
    cout << "swap: a = " << a << ", b = " << b << endl;
    
    // swap_ranges
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {4, 5, 6};
    swap_ranges(v1.begin(), v1.end(), v2.begin());
    cout << "swap_ranges: v1 = ";
    for (int num : v1) cout << num << " ";
    cout << ", v2 = ";
    for (int num : v2) cout << num << " ";
    cout << endl;
    
    // iter_swap
    vector<int> vec = {1, 2, 3, 4};
    iter_swap(vec.begin(), vec.begin() + 3);  // Swap first and last elements
    cout << "iter_swap: ";
    for (int num : vec) cout << num << " ";
    cout << endl;
}