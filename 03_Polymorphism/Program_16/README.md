# Program 16

## Aim
To build a salary-calculation application using abstract classes and run-time polymorphism.

## Problem Statement
Write a C++ program that calculates salaries for permanent and contract employees using an abstract Employee class and overridden salary-calculation functions.

## Concepts Used
- Abstract class
- Pure virtual function
- Inheritance
- Function overriding
- Run-time polymorphism
- Base reference
- Virtual destructor
- Constructor

## Sample Input
No user input. Permanent employee: ID 101, Asha, basic salary Rs. 40000, allowance Rs. 8000. Contract employee: ID 102, Vikas, hourly rate Rs. 500, hours worked 80.

## Sample Output
Employee ID: 101
Name: Asha
Salary: Rs. 48000

Employee ID: 102
Name: Vikas
Salary: Rs. 40000

## Explanation
The Employee class stores common employee details and declares calculateSalary() as a pure virtual function. PermanentEmployee calculates salary using basic salary plus allowance, while ContractEmployee calculates salary using hourly rate multiplied by hours worked. printPaySlip() accepts an Employee reference and therefore demonstrates run-time polymorphism.
