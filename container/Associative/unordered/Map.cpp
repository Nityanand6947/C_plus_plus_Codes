#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, string> um;

    // Insert key-value pairs
    um.insert({1, "One"});
    um[2] = "Two";
    um.insert({3, "Three"});

    // Print key-value pairs
    cout << "Elements in unordered map:" << endl;
    for (const auto& pair : um) {
        cout << pair.first << " => " << pair.second << endl;
    }

    // Find an element
    if (um.find(2) != um.end()) {
        cout << "Key 2 found: " << um[2] << endl;
    }

    // Erase an element by key
    um.erase(1);

    // Check size
    cout << "Size of unordered map: " << um.size() << endl;

    return 0;
}
