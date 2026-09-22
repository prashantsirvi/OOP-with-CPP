# Program 08

## Aim
To observe the order in which constructors and destructors execute for a derived object.

## Problem Statement
Create a Base class with a constructor and destructor and derive Derived from it with its own constructor and destructor. Create one Derived object and observe the printed sequence.

## Concepts Used
- Constructors
- Destructors
- Inheritance
- Object lifetime
- Construction order
- Destruction order

## Sample Input
Creating object invokes Base constructor followed by Derived constructor. When main() ends, the object is destroyed automatically, causing Derived destructor to run first and Base destructor second.

## Sample Output
```text
Base constructor
Derived constructor
Derived destructor
Base destructor
```

## Explanation
When a Derived object is created, the Base part must be constructed before the Derived part, so the Base constructor runs first. During destruction, the order is reversed: the Derived destructor runs before the Base destructor. The program prints messages from each special member function so the lifecycle can be observed directly.


