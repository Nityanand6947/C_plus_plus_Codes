#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {1, 3, 5, 7, 9};

    // Find the lower bound of 5
    auto it = s.lower_bound(5);
    if (it != s.end()) {
        cout << "Lower bound of 5 is: " << *it << endl;
    } else {
        cout << "No element greater than or equal to 5." << endl;
    }

    // Find the lower bound of 6
    it = s.lower_bound(6);
    if (it != s.end()) {
        cout << "Lower bound of 6 is: " << *it << endl;
    } else {
        cout << "No element greater than or equal to 6." << endl;
    }

    return 0;
}
