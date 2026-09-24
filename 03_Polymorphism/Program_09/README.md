# Program 09

## Aim
To implement run-time polymorphism using a virtual function and a base pointer.

## Problem Statement
Write a C++ program in which a base pointer refers to different derived objects and calls the appropriate overridden virtual function.

## Concepts Used
- Run-time polymorphism
- Virtual function
- Base pointer
- Function overriding
- Dynamic binding
- Virtual destructor

## Sample Input
No user input. A base pointer is assigned to a Dog object and then to a Cat object.

## Sample Output
Dog barks
Cat meows

## Explanation
A base pointer can refer to different derived objects. Because sound() is virtual, the appropriate derived implementation is selected during program execution.
