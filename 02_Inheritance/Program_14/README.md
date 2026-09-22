# Program 14

## Aim
To create and use a class declared inside another class.

## Problem Statement
Define University as an outer class containing a public nested Department class. Construct Department using its qualified name and display the stored department name.

## Concepts Used
- Nested class
- Inner/nested type
- Scope resolution
- Encapsulation
- Constructors

## Sample Input
The program constructs a Department object using the qualified type name University::Department and passes the department name to its constructor. display() then prints the stored name.

## Sample Output
```text
Department: Artificial Intelligence and Data Science
```

## Explanation
Department is declared inside University, making it a nested class. Because Department is public, code outside University can refer to it using University::Department. The nested class has its own private name member, constructor, and display() function. The nesting expresses a logical relationship between the two types.
