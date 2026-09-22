# Program 10

## Aim
To demonstrate run-time polymorphism by overriding a virtual member function in derived classes.

## Problem Statement
Create Vehicle with a virtual move() function. Derive Car and Boat and provide their own move() implementations using override.

## Concepts Used
- Virtual function
- Function overriding
- override keyword
- Inheritance
- Run-time polymorphism

## Sample Input
The program creates separate Car and Boat objects and calls their move() functions. Each object executes its corresponding overridden implementation, producing different behavior from the same conceptual operation.

## Sample Output
```text
Car moves on roads
Boat moves on water
```

## Explanation
Vehicle defines move() as virtual, allowing derived classes to provide specialized implementations. Car overrides it for road movement and Boat overrides it for water movement. The override keyword asks the compiler to verify that the derived function correctly overrides a virtual base function.

