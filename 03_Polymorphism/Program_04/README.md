# Program 04

## Aim
To overload prefix and postfix increment operators.

## Problem Statement
Write a C++ program to demonstrate both prefix and postfix increment operators using a Counter class.

## Concepts Used
- Operator overloading
- Unary operator
- Prefix increment
- Postfix increment
- Operator function

## Sample Input
No user input. A Counter object starts with the value 5.

## Sample Output
After prefix increment: 6
Value returned by postfix increment: 6
Counter after postfix increment: 7

## Explanation
Prefix increment increases the object first and then returns the updated object. Postfix increment returns the old value and then increases the object. A dummy int parameter distinguishes the postfix operator function from the prefix version.
