#include <iostream>
using namespace std;

class Rectangle {
public:
    int width;
    int height;

    // Function to calculate area of rectangle
    int area() const {
        return width * height;
    }

    // Overload the + operator to combine areas of two rectangles
    int operator+(const Rectangle& rect) {
        return this->area() + rect.area(); // Combine areas
    }

    void display() const {
        cout << "The width is : " << width << endl;
        cout << "The height is : " << height << endl;
    }
};

int main() {
    Rectangle r1;
    r1.width = 4;
    r1.height = 5;

    Rectangle r2;
    r2.width = 9;
    r2.height = 8;

    // Using the overloaded + operator to combine area
    int totalArea = r1 + r2; // Calls the overloaded + operator

    cout << "The total Area is : " << totalArea << endl;

    return 0;
}
