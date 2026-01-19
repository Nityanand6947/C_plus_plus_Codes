//Returning function

#include <iostream>
#include <functional>
using namespace std;

// Higher-order function that returns another function
/*
break down
function makeAdder(int x) first this will take
return [x](int y) { return x + y; };
This line returns a lambda function that captures the value of x.
The lambda is defined as [x](int y) where:
[x] indicates that x is captured by value (the lambda has access to x even after makeAdder has finished executing).
(int y) specifies that the lambda takes one integer parameter y.
The body of the lambda { return x + y; } computes the sum of x and y.
*/
function<int(int)> makeAdder(int x) {
    return [x](int y) { return x + y; };  // Lambda function capturing x
}

int main() {
    auto add5 = makeAdder(5);
    cout << add5(10) << endl;  // Output: 15
    return 0;
}
