#ifndef CIRCLE_M
#define CIRCLE_M

#include "Shape.h"
#include <cmath>

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return M_PI * radius * radius; // Area = πr²
    }

    double perimeter() const override {
        return 2 * M_PI * radius; // Perimeter = 2πr
    }
};

#endif // CIRCLE_H
