# Program 16

## Aim
To develop a small payroll system using an abstract Employee base class and different salary calculations in derived classes.

## Problem Statement
Create an abstract Employee class with common employee details and a pure virtual calculateSalary(). Derive PermanentEmployee and ContractEmployee with different salary formulas, then print pay slips through a base-class reference.

## Concepts Used
- Abstract class
- Pure virtual function
- Inheritance
- Function overriding
- Polymorphic base reference
- Constructors
- Encapsulation

## Sample Input
The program creates one permanent employee with a basic salary of 40000 and an allowance of 8000, producing 48000. It also creates a contract employee paid 500 per hour for 80 hours, producing 40000. displayPaySlip() calls the common detail function and the appropriate overridden salary calculation for each object.

## Sample Output
```text
Employee ID: 101
Name: Asha
Salary: 48000

Employee ID: 102
Name: Vikas
Salary: 40000
```

## Explanation
Employee stores employeeId and name and declares calculateSalary() as pure virtual, so Employee is abstract. PermanentEmployee calculates salary as basic salary plus allowance. ContractEmployee calculates salary as hourly rate multiplied by hours worked. displayPaySlip() accepts an Employee reference, allowing both derived types to be handled through the same interface.
