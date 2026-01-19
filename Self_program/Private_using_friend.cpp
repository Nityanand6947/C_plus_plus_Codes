#include <iostream>
using namespace std;

class A {
private:
    int *x;
    int *y;

public:
    // Constructor
    A(int &x, int &y) {
        this->x = &x;
        this->y = &y;
    }

    // Friend function declaration
    friend int calculateSum(const A &a);

    // Display function
    void display() {
        cout << "The value of x is: " << *x << endl;
        cout << "The value of y is: " << *y << endl;
    }
};

// Friend function definition
int calculateSum(const A &a) {
    return (*a.x) + *a.y; // Accessing private members directly
}

int main() {
    int a = 10;
    int b = 20;

    A a1(a, b);
    a1.display();



    // Using the friend function to calculate the sum
    int sum = calculateSum(a1);
    cout << "Sum is: " << sum << endl;

    return 0;
}
