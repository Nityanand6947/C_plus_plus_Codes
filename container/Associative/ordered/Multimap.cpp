#include <iostream>
#include <map>
using namespace std;

int main() {
    // Create a multimap of integer keys and string values
    multimap<int, string> mm;

    // Insert key-value pairs into the multimap
    mm.insert({1, "One"});
    mm.insert({2, "Two"});
    mm.insert({1, "Uno"});
    mm.insert({3, "Three"});
    mm.insert({2, "Dos"});
    mm.insert({1, "Un"});
    mm.insert({3, ""});
    // mm.insert({3, NULL}); //It is pointer constant

    // Print the multimap
    cout << "Multimap elements:" << endl;
    for (const auto& pair : mm) {
        cout << pair.first << " => " << pair.second << endl;
    }

    // Count the number of elements with a specific key
    cout << "\nCount of key 1 in multimap: " << mm.count(1) << endl;

    // Erase all elements with a specific key (key = 2)
    mm.erase(2);

    // Print the multimap after erasing elements with key 2
    cout << "\nMultimap after erasing elements with key 2:" << endl;
    for (const auto& pair : mm) {
        cout << pair.first << " => " << pair.second << endl;
    }

    // Find all elements with key 1 using equal_range
    auto range = mm.equal_range(1);
    cout << "\nElements with key 1:" << endl;
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->first << " => " << it->second << endl;
    }

    // Print the size of the multimap
    cout << "\nSize of multimap: " << mm.size() << endl;

    return 0;
}
