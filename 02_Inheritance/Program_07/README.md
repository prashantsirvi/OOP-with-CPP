# Program 07

## Aim
To resolve ambiguity when two base classes provide member functions with the same name.

## Problem Statement
Define Academic and Sports with identically named display() functions. Derive Student from both classes and explicitly identify the required base-class function using the scope-resolution operator.

## Concepts Used
- Multiple inheritance
- Name ambiguity
- Scope-resolution operator
- Base-class qualification
- Member functions

## Sample Input
The program first calls each base-class display() directly with qualification, then calls displayAll() to show both messages again. The qualified calls demonstrate exactly how C++ resolves the ambiguity.

## Sample Output
```text
Academic information
Sports information
Academic information
Sports information
```

## Explanation
Both Academic and Sports define display(). Because Student inherits from both, an unqualified call such as student.display() would be ambiguous. The program resolves this by writing Academic::display() or Sports::display(). Student also provides displayAll(), which explicitly calls both base implementations.
