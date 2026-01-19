#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_multiset<int> ums;

    // Insert elements (duplicates are allowed)
    ums.insert(10);
    ums.insert(20);
    ums.insert(20);
    ums.insert(30);

    // Print elements
    cout << "Elements in unordered multiset:" << endl;
    for (const auto& elem : ums) {
        cout << elem << " ";
    }
    cout << endl;

    // Count occurrences of 20
    cout << "Count of 20 in multiset: " << ums.count(20) << endl;

    // Erase an element
    ums.erase(10);

    // Check size
    cout << "Size of unordered multiset: " << ums.size() << endl;

    return 0;
}
