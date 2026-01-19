/*
Definition: A deep copy creates a new instance of any dynamically allocated memory that the object contains.
 This means that the new object will have its own separate copy of the data.

Memory Management: This prevents issues like double deletion and ensures that changes to one object do not affect another.
*/
#include <iostream>

class DeepCopy {
private:
    int* data;
public:
    // Constructor
    DeepCopy(int value) {
        data = new int(value); // Dynamically allocate memory
    }

    // Deep copy constructor
    DeepCopy(const DeepCopy& other) {
        data = new int(*other.data); // Allocate new memory and copy the value
    }

    // Destructor
    ~DeepCopy() {
        delete data; // Safely free the allocated memory
    }

    void display() const {
        std::cout << "Value: " << *data << std::endl;
    }
};

int main() {
    DeepCopy obj1(84);
    DeepCopy obj2 = obj1; // Deep copy

    obj1.display(); // Output: Value: 84
    obj2.display(); // Output: Value: 84

    //delete obj1;

    return 0;
}
