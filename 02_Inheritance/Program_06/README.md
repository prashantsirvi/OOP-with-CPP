# Program 06

## Aim
To demonstrate multiple inheritance by combining academic and sports records in a single Student class.

## Problem Statement
Create Academic and Sports as two independent base classes, each containing marks. Derive Student from both classes and calculate the combined total.

## Concepts Used
- Multiple inheritance
- Two base classes
- Protected members
- Constructor initialization
- Code reuse
- Derived-class access

## Sample Input
The Student constructor initializes both base classes using an initializer list. main() displays academic marks, sports marks, and their combined total.

## Sample Output
```text
Academic Marks: 80
Sports Marks: 15
Total Marks: 95
```

## Explanation
Academic stores academicMarks and Sports stores sportsMarks. Student inherits publicly from both base classes, so one Student object contains the state and behavior supplied by both. Its showTotal() member can access the protected marks from both parents and add them together.

