# Program 04

## Aim
To implement a three-level inheritance chain using Person, Employee, and Manager.

## Problem Statement
Create Person as the base class, derive Employee from Person, and derive Manager from Employee. Store information at each level and display all three levels through a Manager object.

## Concepts Used
- Multilevel inheritance
- Inheritance chain
- Protected members
- Constructors
- Base-class initialization
- Member functions

## Sample Input
A Manager object is created with a name, employee ID, and team size. showManager() calls showPerson(), showEmployee(), and then displays teamSize.

## Sample Output
```text
Name: Ravi
Employee ID: 501
Team Size: 8
```

## Explanation
The program forms the hierarchy Person → Employee → Manager. Person stores name, Employee adds employeeId, and Manager adds teamSize. When a Manager object is created, its constructor initializes Employee, which in turn initializes Person. Manager can then use functions defined at both earlier levels. This demonstrates how properties and behavior can be inherited through multiple levels.

