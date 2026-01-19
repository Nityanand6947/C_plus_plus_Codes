/*
Definition: A shallow copy simply copies the values of an object�s members. If those members are primitive types (like int, float), it works without issues.
 However, if the class contains pointers, the shallow copy will copy the pointer addresses, leading to multiple objects pointing to the same memory.

Memory Management: In cases with pointers, this can lead to double deletion (where two objects try to free the same memory) or
 unintended changes (if one object modifies the data, the other sees the change).

*/
#include <iostream>

class ShallowCopy {
private:
    int* data;
public:
    // Constructor
    ShallowCopy(int value) {
        data = new int(value); // Dynamically allocate memory
    }

    // Shallow copy constructor
    ShallowCopy(const ShallowCopy& other) {
        data = other.data; // Copy the pointer (shallow copy)
    }

    // Destructor
    ~ShallowCopy() {
        delete data; // Potential double delete if two objects are destroyed
    }

    void display() const {
        std::cout << "Value: " << *data << std::endl;
    }
};

int main() {
    ShallowCopy obj1(42);
    ShallowCopy obj2 = obj1; // Shallow copy

    obj1.display(); // Output: Value: 42
    obj2.display(); // Output: Value: 42

    // Deleting one will cause issues for the other
    return 0;
}
