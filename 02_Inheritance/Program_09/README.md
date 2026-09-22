# Program 09

## Aim
To initialize a parameterized base class constructor from a derived-class constructor.

## Problem Statement
Create Person with a constructor that accepts a name. Derive Student with a roll number and use the initializer list to pass the student name to Person.

## Concepts Used
- Parameterized constructor
- Constructor initializer list
- Inheritance
- Base-class constructor
- Derived-class constructor

## Sample Input
A Student object is constructed using a name and roll number. The derived constructor forwards the name to Person and initializes the roll number itself. display() then prints both values.

## Sample Output
```text
Name: Kiran
Roll Number: 24
```

## Explanation
Person requires a string argument in its constructor, so Student must explicitly invoke Person(std::move(studentName)) in its initializer list. Student then initializes its own rollNumber. This demonstrates how a derived constructor supplies values required by a parameterized base constructor.
