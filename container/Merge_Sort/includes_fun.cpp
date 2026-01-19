//NOTE: WORKS ON SORTED ELEMENT NOT ON UNSORTED ELEMENT
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Two sorted vectors
    vector<int> v1 = {1, 3,5, 7, 9};
    vector<int> v2 = {3, 5, 7};  // v2 is a subset of v1

    // Check if v1 includes all elements of v2
    bool result = includes(v1.begin(), v1.end(), v2.begin(), v2.end());

    if (result) {
        cout << "v1 includes all elements of v2" << endl;
    } else {
        cout << "v1 does not include all elements of v2" << endl;
    }

    return 0;
}
