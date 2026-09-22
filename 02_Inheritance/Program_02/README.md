# Program 02

## Aim
To demonstrate how a derived class can directly access a protected data member inherited from its base class.

## Problem Statement
Define Employee with a protected name member. Derive Developer from Employee, store a programming language in the derived class, and display both values from a Developer member function.

## Concepts Used
- Class and object
- Inheritance
- Protected access specifier
- Derived-class access
- Constructors
- Encapsulation

## Sample Input
The program constructs a Developer with a name and programming language. The display() function prints the inherited protected name and the derived language value.

## Sample Output
```text
Developer: Prashant
Language: C++
```

## Explanation
Employee keeps name protected so it is inaccessible through ordinary outside code but remains available to Employee and its derived classes. Developer inherits Employee and accesses name directly inside display(). The derived class also owns language as private data. This illustrates why protected access is useful when derived classes need controlled access to base-class state.

