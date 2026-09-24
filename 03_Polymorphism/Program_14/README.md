# Program 14

## Aim
To understand object slicing and avoid it using references.

## Problem Statement
Write a C++ program to demonstrate the difference between passing a derived object by value and passing it by reference through a base-class interface.

## Concepts Used
- Object slicing
- Inheritance
- Virtual function
- Pass by value
- Pass by reference
- Polymorphism

## Sample Input
No user input. A Derived object is passed to functions that accept Base by value and by reference.

## Sample Output
Passing by value: Base object
Passing by reference: Derived object

## Explanation
When a derived object is passed by value as a Base object, only the base portion is copied, which causes object slicing. Passing the object by reference preserves the complete derived object and allows virtual dispatch.
