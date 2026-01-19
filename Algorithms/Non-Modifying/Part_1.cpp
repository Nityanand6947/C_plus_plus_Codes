#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <functional>
#include <random>
using namespace std;

int main(){
     // Part 1: Condition Checking and Functional Application

    vector<int> v = {1, 2, 3, 4, 5};

    // all_of: Check if all elements are positive
    bool all_positive = all_of(v.begin(), v.end(), [](int x) { return x > 0; });
    cout << "all_of: All positive? " << (all_positive ? "Yes" : "No") << endl;

    // any_of: Check if any element is greater than 4
    bool any_greater_than_4 = any_of(v.begin(), v.end(), [](int x) { return x > 4; });
    cout << "any_of: Any greater than 4? " << (any_greater_than_4 ? "Yes" : "No") << endl;

    // none_of: Check if no element is negative
    bool none_negative = none_of(v.begin(), v.end(), [](int x) { return x < 0; });
    cout << "none_of: Any negative? " << (none_negative ? "No" : "Yes") << endl;

    // for_each: Apply a function to double each element
    cout << "for_each: Doubled values: ";
    for_each(v.begin(), v.end(), [](int &x) { x *= 2; });
    for (int num : v) cout << num << " ";
    cout << endl;
}