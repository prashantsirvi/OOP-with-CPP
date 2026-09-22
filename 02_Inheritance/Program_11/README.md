# Program 11

## Aim
To create an abstract base class using a pure virtual function and implement that function in concrete derived classes.

## Problem Statement
Define Shape with a pure virtual area() function. Derive Rectangle and Circle and implement area() differently for each shape. Create objects of the concrete classes and display their areas.

## Concepts Used
- Abstract class
- Pure virtual function
- Inheritance
- Function overriding
- Polymorphic interface
- Constructors

## Sample Input
The program creates a Rectangle with length 5 and width 3 and a Circle with radius 2. Calling area() on each concrete object uses that class's implementation. Shape itself cannot be instantiated because it has a pure virtual function.

## Sample Output
```text
Rectangle Area: 15
Circle Area: 12.5664
```

## Explanation
Shape contains area() = 0, making Shape abstract and preventing direct instantiation. Rectangle implements area as length × width, while Circle implements area using π × radius². Both classes override the same interface with their own calculations.

