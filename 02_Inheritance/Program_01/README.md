# Program 01

## Aim
To implement single inheritance by deriving a Student class from a Person base class and displaying inherited and derived-class information.

## Problem Statement
Create a base class named Person containing a name. Derive Student publicly from Person, add a roll number, create a Student object, and display both the inherited name and the student's roll number.

## Concepts Used
- Class and object
- Single inheritance
- Base and derived classes
- Public inheritance
- Protected data member
- Constructor and member function

## Sample Input
The program creates a Student object with a name and roll number and displays the two values. The input values are fixed in main rather than read interactively.

## Sample Output
```text
Name: Prashant
Roll Number: 33
```

## Explanation
The Person class stores the common name data. Student inherits from Person using public inheritance and adds rollNumber as its own data member. The Student constructor first initializes the Person part and then initializes rollNumber. displayStudent() calls the inherited displayName() function and then prints the derived-class information. This demonstrates the is-a relationship: a Student is a Person.


