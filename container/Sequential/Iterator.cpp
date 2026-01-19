/*
Iterator acts as a pointer that gives address of the object and 
to print the value we have to Dereference the address by using the pointer (*).
And moreover it iterate through the containers like vector and lists. But unlike 
for and ranged based for loop it won't give value directly, we have to derefrence the address . 

syntax:
    <type>::iterator ref_name

Container iterators functions thats helps this to iterate are :
    -begin()
    -end()
    -cbegin() [constant begin]
    -cend()
    -rbegin() [reverse begin]
    -rend()
    -crbegin() [constant reverse]
    -crend()
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {

      vector<int> arr = {1, 2, 3, 4, 5};

    // Defining an iterator pointing to
    // the beginning of the vector
    vector<int>::iterator first =
      arr.begin();

    // Defining an iterator pointing to the
      // end of the vector
    vector<int>::iterator last =
      arr.end();
  
      // Iterating the whole vector
      while(first != last) {
      cout << *first << " ";
      first++;
    }

    /*
    vector<int> myVector = {10, 20, 30, 40};

    // Using an iterator to traverse the vector
    for (vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it) {
        cout << *it << " "; // Dereference to access the value
    }
    cout << endl;

    // Modify elements using dereferencing
    for (vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it) {
        *it *= 2; // Double each element
    }

    // Print modified vector
    for (const auto& value : myVector) {
        cout << value << " "; // Dereference not needed here, just accessing the value
    }
    cout << endl;

    return 0;
    */
}
