#include <iostream>

class Shape {
public:
    virtual double area() const = 0;
    virtual ~Shape() = default;
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    explicit Circle(double r) : radius(r) {}

    double area() const override {
        constexpr double PI = 3.141592653589793;
        return PI * radius * radius;
    }
};

int main() {
    Rectangle rectangle(5.0, 3.0);
    Circle circle(2.0);

    std::cout << "Rectangle Area: " << rectangle.area() << '\n';
    std::cout << "Circle Area: " << circle.area() << '\n';
    return 0;
}
