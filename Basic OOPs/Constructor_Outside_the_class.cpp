#include <iostream>
using namespace std;

class Point {
private:
    int x, y; // Private members

public:
    // Constructor declaration
     Point(int xCoord, int yCoord);

    // Method to display coordinates
    void display() const {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};

// Constructor definition outside the class
Point::Point(int xCoord, int yCoord) {
    x = xCoord;
    y = yCoord;
}

int main() {
    // Creating an object of Point
    Point p(10, 20);
    p.display(); // Outputs: Point(10, 20)

    return 0;
}

/*

[short program]

#include <iostream>
using namespace std;

class A{

    int x;
    public:
    A(int x);

};
A::A(int x){
    cout<<"value of x "<<x<<endl;
};

int main() {
    A a1(20);
    return 0;
}


*/
