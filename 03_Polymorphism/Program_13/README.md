# Program 13

## Aim
To demonstrate correct destruction of a derived object through a base pointer.

## Problem Statement
Write a C++ program to demonstrate that a virtual destructor allows both the derived and base destructors to execute when an object is deleted through a base pointer.

## Concepts Used
- Virtual destructor
- Base pointer
- Destructor overriding
- Polymorphic deletion
- Object cleanup

## Sample Input
No user input. A Base pointer is assigned a dynamically created Derived object and then deleted.

## Sample Output
Derived destructor
Base destructor

## Explanation
When deleting through a base pointer, a virtual base destructor ensures that the derived destructor executes first, followed by the base destructor. This provides correct cleanup for polymorphic objects.
