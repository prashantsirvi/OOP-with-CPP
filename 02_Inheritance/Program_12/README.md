# Program 12

## Aim
To solve the duplicate-base problem in diamond inheritance by making Person a virtual base class.

## Problem Statement
Create Person as the common base, derive Student and Employee virtually from Person, and derive TeachingAssistant from both. Initialize the shared Person part from the most-derived class.

## Concepts Used
- Diamond inheritance
- Virtual base class
- Multiple inheritance
- Constructor initialization
- Shared base subobject
- Ambiguity prevention

## Sample Input
A TeachingAssistant object is created with the name Riya. Even though two inheritance paths lead to Person, displayName() refers to the single shared Person part, so the name is printed once without duplicate-base ambiguity.

## Sample Output
```text
Name: Riya
```

## Explanation
Student and Employee both virtually inherit Person. TeachingAssistant inherits from both Student and Employee, forming a diamond. Virtual inheritance ensures TeachingAssistant contains only one Person subobject instead of two. Because TeachingAssistant is the most-derived class, its constructor initializes the virtual Person base with the required name.

