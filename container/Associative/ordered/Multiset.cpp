/*
Functions are :
    -begin()
    -end()
    -size()
    -max_size()
    -empty()
    -insert()
    -clear()
    -erase()
    -a.erase(a.fin())
*/
#include <iostream>
#include <set>
using namespace std;

int main() {
    // Create a multiset of integers
    multiset<int> ms;

    // Insert elements into the multiset
    ms.insert(10);
    ms.insert(20);
    ms.insert(10);
    ms.insert(30);
    ms.insert(20);
    ms.insert(10);

    // Print the multiset
    cout << "Multiset elements: ";
    for (int num : ms) {
        cout << num << " ";
    }
    cout << endl;

    // Count occurrences of element 10
    cout << "Count of 10 in multiset: " << ms.count(10) << endl;

    // Erase one occurrence of element 10
    ms.erase(10);

    cout << "Multiset after erasing one occurrence of 10: ";
    for (int num : ms) {
        cout << num << " ";
    }
    cout << endl;

    // Find an element
    auto it = ms.find(20);
    if (it != ms.end()) {
        cout << "Found 20 in the multiset" << endl;
    }

    // Print the size of the multiset
    cout << "Size of multiset: " << ms.size() << endl;

    return 0;
}
