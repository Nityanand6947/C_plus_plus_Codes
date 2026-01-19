/*
It uses hash table to arrange the elements 

Functions used in this:
    -size()
    -empty()
    -insert()
    -erase()
*/

#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us;

    // Insert elements
    us.insert(10);
    us.insert(20);
    us.insert(30);
    us.insert(20); // Duplicate, will not be added

    // Print elements
    cout << "Elements in unordered set:" << endl;
    for (const auto& elem : us) {
        cout << elem << " ";
    }
    cout << endl;

    // Find an element
    if (us.find(20) != us.end()) {
        cout << "Element 20 found." << endl;
    }

    // Erase an element
    us.erase(10);

    // Check size
    cout << "Size of unordered set: " << us.size() << endl;

    return 0;
}
