/*
Copy

*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
      // Part 3: Transforming and Replacing Elements
    
    vector<int> v = {1, 2, 3, 4};
    
    // transform
    transform(v.begin(), v.end(), v.begin(), [](int x) { return x * 2; });
    cout << "transform: ";
    for (int num : v) cout << num << " ";
    cout << endl;
    
    // replace
    replace(v.begin(), v.end(), 4, 10);
    cout << "replace: ";
    for (int num : v) cout << num << " ";
    cout << endl;
    
    // replace_if
    replace_if(v.begin(), v.end(), [](int x) { return x > 5; }, 0);
    cout << "replace_if: ";
    for (int num : v) cout << num << " ";
    cout << endl;
    
    // replace_copy
    vector<int> result;
    replace_copy(v.begin(), v.end(), back_inserter(result), 10, 20);
    cout << "replace_copy: ";
    for (int num : result) cout << num << " ";
    cout << endl;
    
    // replace_copy_if
    vector<int> result_if;
    replace_copy_if(v.begin(), v.end(), back_inserter(result_if), [](int x) { return x == 2; }, 5);
    cout << "replace_copy_if: ";
    for (int num : result_if) cout << num << " ";
    cout << endl;
}