# Program 03

## Aim
To overload a unary minus operator for a user-defined class.

## Problem Statement
Write a C++ program to overload the unary minus operator so that it produces the negative of a stored object value.

## Concepts Used
- Operator overloading
- Unary operator
- User-defined class
- Operator function
- Object negation

## Sample Input
No user input. A Number object is initialized with the value 25.

## Sample Output
Original value: 25
Negated value: -25

## Explanation
The unary minus operator works on one operand. The overloaded operator-() function returns a new Number object containing the negative of the original value. Therefore, the expression -first calls first.operator-().
