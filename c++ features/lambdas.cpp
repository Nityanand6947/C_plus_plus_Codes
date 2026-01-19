#include<iostream>
using namespace std;

//lambda are used for inline anonymous function or unnamed function
//syntax: [](){};
//[]-capture clause(if you are using variable from outside then you have to place here)  , ()-parameter(is like taking input from the user as formal argument),
//{}-function definition(is for writing of your code for specific operation:)

int main() {
    int a = 5, b = 10;

    auto lambda = [a, &b]() {
        cout << "a: " << a << ", b: " << b << endl;
        b += 5;
    };

    lambda(); // Outputs: a: 5, b: 10
    cout << "After lambda: b: " << b << endl; // Outputs: b: 15

    return 0;
}
