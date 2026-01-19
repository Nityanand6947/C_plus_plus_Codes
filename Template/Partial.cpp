#include <iostream>

// Primary template
template <typename T>
class Printer {
public:
    void print(T value) {
        std::cout << "Value: " << value << std::endl;
    }
};
// Partial specialization for pointers
template <typename T>
class Printer<T*> {
public:
    void print(T* value) {
        if (value) {
            std::cout << "Pointer points to: " << *value << std::endl;
        } else {
            std::cout << "Null pointer" << std::endl;
        }
    }
};

int main() {
    Printer<int> intPrinter;
    intPrinter.print(42);  // Output: Value: 42

    int x = 10;
    Printer<int*> pointerPrinter;
    pointerPrinter.print(&x); // Output: Pointer points to: 10
    pointerPrinter.print(nullptr); // Output: Null pointer

    return 0;
}
