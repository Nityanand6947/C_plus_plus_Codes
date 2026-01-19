/*
In this we can insert and delete form the both side because it is 
doubly ended queue 

Function used in this are :
    -insert()
    -rbegin()
    -rend()
    -cbegin()
    -max-size()
    -assing()
    -resize()
    -push_front() and push_back()
    -pop_front() and pop_back()
    -front() and back()
    -clear() and erase()
    -empty() and size()
    
*/

#include <iostream>
#include <deque>
using namespace std;

int main() {
    // 1. Declaration and Initialization
    deque<int> dq = {10, 20, 30, 40};

    // 2. Adding Elements
    dq.push_back(50);       // Add 50 to the back
    dq.push_front(5);       // Add 5 to the front

    // 3. Accessing Elements
    cout << "Front: " << dq.front() << endl; // Access first element
    cout << "Back: " << dq.back() << endl;   // Access last element
    cout << "Element at index 2: " << dq.at(2) << endl; // Access element at index 2

    // 4. Size and Capacity
    cout << "Size: " << dq.size() << endl;  // Get the number of elements
    cout << "Max Size: " << dq.max_size() << endl; // Get the maximum size

    // 5. Iterating through the deque
    cout << "Elements in deque: ";
    for (const auto& elem : dq) {
        cout << elem << " ";  // Output: 5 10 20 30 40 50
    }
    cout << endl;

    // 6. Removing Elements
    dq.pop_back();     // Remove last element (50)
    dq.pop_front();    // Remove first element (5)

    cout << "After popping front and back: ";
    for (const auto& elem : dq) {
        cout << elem << " ";  // Output: 10 20 30 40
    }
    cout << endl;

    // 7. Inserting at Specific Positions
    dq.insert(dq.begin() + 1, 15); // Insert 15 at index 1
    cout << "After inserting 15 at index 1: ";
    for (const auto& elem : dq) {
        cout << elem << " ";  // Output: 10 15 20 30 40
    }
    cout << endl;

    // 8. Clearing the deque
    dq.clear(); // Remove all elements
    cout << "Size after clearing: " << dq.size() << endl; // Output: 0

    return 0;
}
