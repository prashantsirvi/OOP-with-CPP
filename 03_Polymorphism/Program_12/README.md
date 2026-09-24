# Program 12

## Aim
To process different derived objects through a common abstract base interface.

## Problem Statement
Write a C++ program that stores different Shape objects through polymorphic pointers and processes them using a common interface.

## Concepts Used
- Polymorphism
- Abstract class
- Pure virtual functions
- Base-class pointers
- unique_ptr
- Virtual destructor
- vector

## Sample Input
No user input. A Rectangle and Circle are stored in a collection of polymorphic Shape pointers.

## Sample Output
Rectangle Area: 15
Circle Area: 12.5664

## Explanation
The Shape class defines a common abstract interface. Rectangle and Circle implement area() and displayName(). The vector stores unique_ptr<Shape>, allowing different derived objects to be processed through the same base interface. The virtual destructor ensures correct cleanup.
