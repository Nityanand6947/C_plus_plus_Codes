/*
Each element has a key value and a mapped value. No two mapped values can have the same key values.

Functions used in this;
 -begin()
 -end()
 -size()
 -max_size()
 -pair_insert(keyvalue,mapvalue)
 -erase(iterator position)
 -clear()
*/
#include <iostream>
#include <map>
using namespace std;

int main() {
    // Create a map to store key-value pairs of type int and string
    map<int, string> m;

    // Inserting key-value pairs into the map using operator[]
   // m[0] = nullptr;
    m[1] = "One";
    m[2] = "Two";
    m[3] = "Three";
    //m[8] = nullptr;
    m[4] = "Four";
    m[5] = "Five";
    //m[8] = NULL; //Because it is using comparator 
    // m.insert({7,"Eight"}); //First one is considered 
    m.insert({7,"Seven"});

    // 1. Using begin() and end() to print all elements of the map
    cout << "Elements in the map (using begin() and end()):" << endl;
    for (auto it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " => " << it->second << endl;
    }

    // 2. Using size() to get the number of elements in the map
    cout << "\nSize of the map: " << m.size() << endl;

    // 3. Using max_size() to get the maximum number of elements the map can hold
    cout << "Max size of the map: " << m.max_size() << endl;

    // 4. Inserting a key-value pair using insert()
    cout << "\nInserting a new key-value pair (6, 'Six'):" << endl;
    m.insert({6, "Six"});
    
    // 5. Using begin() and end() to print all elements after insertion
    cout << "Elements after insertion:" << endl;
    for (auto it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " => " << it->second << endl;
    }

    // 6. Erasing an element using iterator
    cout << "\nErasing the element with key 3:" << endl;
    auto it = m.find(3);  // Find the element with key 3
    if (it != m.end()) {
        m.erase(it);  // Erase the element at the iterator position
    }

    // 7. Using begin() and end() to print all elements after erasure
    cout << "Elements after erasure:" << endl;
    for (auto it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " => " << it->second << endl;
    }

    // 8. Clearing the entire map using clear()
    cout << "\nClearing the map..." << endl;
    m.clear();

    // 9. Check if map is empty after clear()
    if (m.empty()) {
        cout << "The map is now empty." << endl;
    }

    return 0;
}
/*
Real life examples:
    -Grade management system
    -inventory management system(id,value)
    -Phone book application
    -Event Scheduling

 */