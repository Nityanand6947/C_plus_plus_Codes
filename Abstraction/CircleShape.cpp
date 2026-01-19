#include <iostream>
#include "Circle.h"

int main() {
    Shape* shape = new Circle(15.0); // Create a Circle object

    std::cout << "Area: " << shape->area() << std::endl;         // Calculate area
    std::cout << "Perimeter: " << shape->perimeter() << std::endl; // Calculate perimeter

    delete shape; // Clean up
    return 0;
}
