# Program 10

## Aim
To use a base-class reference for run-time polymorphism.

## Problem Statement
Write a C++ program that passes different derived objects through a base-class reference and calls their overridden area() functions.

## Concepts Used
- Run-time polymorphism
- Virtual function
- Base reference
- Function overriding
- Dynamic binding

## Sample Input
No user input. A Rectangle with length 5 and width 3 and a Circle with radius 2 are processed.

## Sample Output
Area: 15
Area: 12.5664

## Explanation
Passing objects through a const Shape& preserves the actual derived object and allows virtual dispatch to select the correct area() implementation. The rectangle and circle therefore produce their own area calculations.
