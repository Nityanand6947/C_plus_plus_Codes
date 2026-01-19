/*
Internally it uses single linked lists 
Function used in this :
    -assign()
    -push_front()
    -emplace_front()
    -pop_front()
    -insert_after()
    -emplace_after()
    -erase_after()
    -remove()
    -remove_if()
    -clear()
    -splice_after()
    -max_size(),resize(),unique(),reverse()
*/
#include <iostream>
#include <forward_list>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
    // 1. Declaration and Initialization
    forward_list<int> fl = {10, 20, 30, 40};

    // 2. Assigning Values
    forward_list<int> fl2;
    fl2.assign(fl.begin(), fl.end()); // Assign values from fl
    cout << "Assigned values: ";
    for (int val : fl2) {
        cout << val << " ";  // Output: 10 20 30 40
    }
    cout << endl;

    // 3. Adding Elements
    fl.push_front(5); // Add 5 to the front
    cout << "After push_front(5): ";
    for (int val : fl) {
        cout << val << " ";  // Output: 5 10 20 30 40
    }
    cout << endl;

    // 4. Emplace Front
    fl.emplace_front(1); // Construct 1 in place at the front
    cout << "After emplace_front(1): ";
    for (int val : fl) {
        cout << val << " ";  // Output: 1 5 10 20 30 40
    }
    cout << endl;

    // 5. Pop Front
    fl.pop_front(); // Remove the first element (1)
    cout << "After pop_front(): ";
    for (int val : fl) {
        cout << val << " ";  // Output: 5 10 20 30 40
    }
    cout << endl;

    // 6. Inserting After
    auto it = fl.insert_after(fl.before_begin(), 15); // Insert 15 before the first element
    cout << "After insert_after(): ";
    for (int val : fl) {
        cout << val << " ";  // Output: 15 5 10 20 30 40
    }
    cout << endl;

    // 7. Emplace After
    fl.emplace_after(it, 25); // Construct 25 after the iterator
    cout << "After emplace_after(25): ";
    for (int val : fl) {
        cout << val << " ";  // Output: 15 5 10 25 20 30 40
    }
    cout << endl;

    // 8. Erase After
    fl.erase_after(it); // Remove the element after the iterator (5)
    cout << "After erase_after(): ";
    for (int val : fl) {
        cout << val << " ";  // Output: 15 10 25 20 30 40
    }
    cout << endl;

    // 9. Remove
    fl.remove(20); // Remove all occurrences of 20
    cout << "After remove(20): ";
    for (int val : fl) {
        cout << val << " ";  // Output: 15 10 25 30 40
    }
    cout << endl;

    // 10. Remove If
    fl.remove_if([](int n) { return n > 25; }); // Remove elements greater than 25
    cout << "After remove_if(n > 25): ";
    for (int val : fl) {
        cout << val << " ";  // Output: 15 10 25
    }
    cout << endl;

    // 11. Clear
    fl.clear(); // Clear all elements
    cout << "Size after clear: " <<  distance(fl.begin(), fl.end()) << endl; // Output: 0

    // 12. Splice After (using another forward_list)
    forward_list<int> fl3 = {100, 200, 300};
    fl.splice_after(fl.before_begin(), fl3); // Move all elements from fl3 to fl
    cout << "After splice_after: ";
    for (int val : fl) {
        cout << val << " ";  // Output: 100 200 300
    }
    cout << endl;

    // 13. Max Size
    cout << "Max size: " << fl.max_size() << endl;

    // 14. Resize (Not applicable for forward_list; no direct resize function)

    // 15. Unique (Remove consecutive duplicates)
    fl.push_front(300);
    fl.push_front(300); // Adding duplicate for demonstration
    fl.unique(); // Keep only unique elements
    cout << "After unique(): ";
    for (int val : fl) {
        cout << val << " ";  // Output: 300 100 200 300
    }
    cout << endl;

    // 16. Reverse (Not directly available in forward_list; use reverse algorithm)
    fl.reverse(); // Note: This is not a member function, but can be achieved using reverse with iterators
    cout << "Reversed: ";
    for (int val : fl) {
        cout << val << " ";  // Output will depend on the state of fl
    }
    cout << endl;

    return 0;
}
