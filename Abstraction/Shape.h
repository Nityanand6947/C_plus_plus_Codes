#ifndef SHAPE_K
#define SHAPE_K

class Shape {
public:
    // Pure virtual function for calculating area
    virtual double area() const = 0;

    // Pure virtual function for calculating perimeter
    virtual double perimeter() const = 0;

    // Virtual destructor
    virtual ~Shape() {}
};

#endif // SHAPE_H
