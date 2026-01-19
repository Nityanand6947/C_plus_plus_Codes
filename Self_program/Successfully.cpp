#include <iostream>
using namespace std;

class A {
private:
    int x;
    int y;

public:
    int *ptr; // Pointer to int
    int *ptr2;

    // Constructor
    A(int x,int y) {
        this->x = x;
        this->y = y;

        // Initialize ptr to point to x
        //Here the address of x is given to ptr and address of y to ptr2
        ptr = &this->x;
        ptr2 = &this->y;
    }
};

int main() {
    A a1(10,20);

int sum = 0;

    int c = *(a1.ptr); // Dereference ptr to get the value of x
    int d = *(a1.ptr2);

    sum = c+d;

    cout << c << endl;
    cout << d << endl;
    cout << sum << endl;

    return 0;
}
