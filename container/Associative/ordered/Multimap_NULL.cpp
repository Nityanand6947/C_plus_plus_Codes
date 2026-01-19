#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // Create a multimap with int as key and pointer to string as value
    multimap<int, string*> mm;

    // Create some string objects and a null pointer
    string str1 = "One";
    string str2 = "Two";
    string* ptr = NULL;  // Using nullptr as a valid pointer (null value)

    // Insert key-value pairs into the multimap
    mm.insert({1, &str1});
    mm.insert({2, &str2});
    mm.insert({3, ptr});  // Storing nullptr

    // Print the multimap
    cout << "Multimap elements:" << endl;
    for (const auto& pair : mm) {
        cout << pair.first << " => ";
        if (pair.second == nullptr) {
            cout << "NULL" << endl;  // Handle null pointer case
        } else {
            cout << *(pair.second) << endl;  // Dereferencing the pointer
        }
    }

    return 0;
}
