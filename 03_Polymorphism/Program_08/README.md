# Program 08

## Aim
To observe static binding when a base-class function is not virtual.

## Problem Statement
Write a C++ program in which a base pointer points to a derived object and demonstrate which display() function is called when the base function is not virtual.

## Concepts Used
- Inheritance
- Base pointer
- Static binding
- Function hiding
- Non-virtual function

## Sample Input
No user input. A Base pointer points to a Derived object.

## Sample Output
Base display function

## Explanation
The pointer has the static type Base*. Because display() is not virtual, the compiler binds the call to Base::display(). This demonstrates static binding.
