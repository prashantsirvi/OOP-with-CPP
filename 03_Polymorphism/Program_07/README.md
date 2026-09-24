# Program 07

## Aim
To overload an operator using a friend non-member function.

## Problem Statement
Write a C++ program to overload the + operator as a friend function so that an integer can be added to a Complex object.

## Concepts Used
- Operator overloading
- Friend function
- Non-member operator
- Binary + operator
- Private data access

## Sample Input
No user input. A Complex object contains 2 + 3i and is added to the integer 10.

## Sample Output
Result: 12 + 3i

## Explanation
Sometimes the left operand is not an object of the class. The friend non-member operator+() allows an expression such as 10 + number while still accessing the private members of the Complex object.
