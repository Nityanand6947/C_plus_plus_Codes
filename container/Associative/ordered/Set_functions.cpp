#include <iostream>
#include <set>
using namespace std;

int main() {
    // Create a set and insert elements
    set<int> s;
    s.insert(5);
    s.insert(10);
    s.insert(20);
    s.insert(30);

    // Display the set elements
    cout << "Set elements: ";
    for (const auto& elem : s) {
        cout << elem << " ";
    }
    cout << endl;

    // Find an element
    auto it = s.find(20);
    if (it != s.end()) {
        cout << "Found element: " << *it << endl;
    }else{
        cout<<"Not found"<<endl;
    }

    // Try to insert a duplicate element
    s.insert(20);  // Won't be added because it's a duplicate
    cout << "Set after trying to insert duplicate 20: ";
    for (const auto& elem : s) {
        cout << elem << " ";
    }
    cout << endl;

    // Check the size of the set
    cout << "Set size: " << s.size() << endl;

    // Erase an element
    s.erase(20);
    cout << "Set after erasing 20: ";
    for (const auto& elem : s) {
        cout << elem << " ";
    }
    cout << endl;

    // Use lower_bound() and upper_bound()
    auto lb = s.lower_bound(10);
    auto ub = s.upper_bound(10);
    cout << "Lower bound of 10: " << *lb << endl;
    if (ub != s.end()) {
        cout << "Upper bound of 10: " << *ub << endl;
    }

    // Clear the set
    s.clear();
    cout << "Set cleared, size: " << s.size() << endl;

    return 0;
}
