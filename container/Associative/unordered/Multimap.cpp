#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_multimap<int, string> umm;

    // Insert key-value pairs (duplicates allowed)
    umm.insert({1, "One"});
    umm.insert({2, "Two"});
    umm.insert({2, "Dos"});
    umm.insert({3, "Three"});

    // Print key-value pairs
    cout << "Elements in unordered multimap:" << endl;
    for (const auto& pair : umm) {
        cout << pair.first << " => " << pair.second << endl;
    }

    // Find all elements with key 2
    auto range = umm.equal_range(2);
    cout << "Elements with key 2:" << endl;
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->first << " => " << it->second << endl;
    }

    // Erase an element
    umm.erase(1);

    // Check size
    cout << "Size of unordered multimap: " << umm.size() << endl;

    return 0;
}
