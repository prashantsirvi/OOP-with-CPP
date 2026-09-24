# Program 08

## Aim
To understand the use of an inline member function and a friend function for accessing class data.

## Problem Statement
Write a C++ program in which a private data member is accessed through an inline getter and also through a friend function.

## Concepts Used
- Private data member
- Constructor
- Inline function
- Getter function
- Friend function

## Sample Input
No user input. A Test object is initialized with the value 50.

## Sample Output
50
50

## Explanation
The private value is initialized by the constructor. The inline getValue() function returns it. The friend function show(Test t) can directly access the private value, so the program displays 50 through both mechanisms.
