#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // Create a map to store key-value pairs of type int and string pointer
    map<int, string*> m;

    // Inserting key-value pairs into the map using operator[]
    string one = "One";
    string two = "Two";
    string seven = NULL; //Exception
    string three = "Three";
    string four = "Four";
    string five = "Five";
    string six = "Six";

    m[1] = &one;
    m[2] = &two;
    m[3] = &three;
    m[8] = nullptr;  // Now we can store nullptr
    m[4] = &four;
    m[5] = &five;
    m[6] = &six;
    m[7] = &seven;

    // 1. Using begin() and end() to print all elements of the map
    cout << "Elements in the map (using begin() and end()):" << endl;
    for (auto it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " => ";
        if (it->second == nullptr) {
            cout << "nullptr" << endl;
        } else {
            cout << *(it->second) << endl;
        }
    }

    return 0;
}
