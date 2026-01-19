#include <iostream>
using namespace std;

class Multiplication
{
public:
    int val; // 32

public:
    Multiplication() {};
    Multiplication(int x) : val(x) {}

    // operator () is get overloaded
    int operator()(int a, int b)
    {
        return (a * val) + b;
    }
};
/*
Here first we when the object is getting created then we are giving value as 32
Now val value is 32
Again now when using m1 object and passing 2 and 3 that objects is working like function and doing operation
first val is getting multiplied with 2 and then val is getting multiplied with 3.
*/
int main()
{
    Multiplication m1(32);

    cout << m1.val << endl;
    cout << "First value is : " << m1(2, 5) << endl;
    cout << "Second value is : " << m1(3, 0) << endl;
}
