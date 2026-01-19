#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {1, 3, 5, 7, 9};

    // Find the upper bound of 5
    auto it = s.upper_bound(5);
    if (it != s.end()) {
        cout << "Upper bound of 5 is: " << *it << endl;
    } else {
        cout << "No element greater than 5." << endl;
    }

    // Find the upper bound of 6
    it = s.upper_bound(6);
    if (it != s.end()) {
        cout << "Upper bound of 6 is: " << *it << endl;
    } else {
        cout << "No element greater than 6." << endl;
    }

    return 0;
}
