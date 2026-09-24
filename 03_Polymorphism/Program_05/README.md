# Program 05

## Aim
To overload the binary + operator to add two complex numbers.

## Problem Statement
Write a C++ program to create a Complex class and overload the binary + operator for adding two complex-number objects.

## Concepts Used
- Operator overloading
- Binary operator
- Complex numbers
- Member operator function
- Object addition

## Sample Input
No user input. The two complex numbers are 2 + 3i and 4 + 5i.

## Sample Output
First complex number: 2 + 3i
Second complex number: 4 + 5i
Sum: 6 + 8i

## Explanation
The overloaded operator+() receives another Complex object and returns a new Complex object whose real and imaginary parts are the sums of the corresponding parts. The expression first + second is handled through first.operator+(second).
