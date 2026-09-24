# Unit 03 — Polymorphism

## Overview

This unit focuses on Polymorphism in Object-Oriented Programming using C++. It covers compile-time polymorphism through function overloading and operator overloading, as well as run-time polymorphism using virtual functions, base-class pointers and references, abstract classes, pure virtual functions, virtual destructors, and polymorphic collections.

The programs in this unit are designed to demonstrate the practical implementation of polymorphism and related Object-Oriented Programming concepts using C++.

## List of Programs

1. Function Overloading
Demonstrates compile-time polymorphism using multiple functions with the same name but different parameter lists.

2. Area Calculator
Demonstrates function overloading by calculating the areas of a square, rectangle, and circle using different parameter lists.

3. Unary Minus Operator
Demonstrates unary operator overloading by defining the behavior of the minus operator for a user-defined class.

4. Prefix and Postfix Increment
Demonstrates prefix and postfix increment operator overloading and the difference between their execution and return behavior.

5. Binary + Operator Overloading
Demonstrates binary operator overloading by adding two Complex number objects using the + operator.

6. Relational Operator Overloading
Demonstrates overloading of the greater-than operator to compare two user-defined Distance objects.

7. Friend/Non-Member Operator Overloading
Demonstrates operator overloading using a friend non-member function, allowing an expression such as adding an integer to a Complex object.

8. Base Pointer Without a Virtual Function
Demonstrates static binding when a base pointer refers to a derived object and the base-class function is not virtual.

9. Base Pointer With a Virtual Function
Demonstrates run-time polymorphism using a virtual function and a base-class pointer that refers to different derived objects.

10. Base Reference With a Virtual Function
Demonstrates dynamic binding through a base-class reference and overridden area() functions implemented by derived classes.

11. Abstract Class and Pure Virtual Function
Demonstrates an abstract class containing a pure virtual function and shows how a derived class provides the required implementation.

12. Collection of Polymorphic Shape Pointers
Demonstrates processing different derived Shape objects through a common abstract interface using polymorphic smart pointers.

13. Virtual Destructor
Demonstrates correct destruction of a derived object through a base pointer using a virtual destructor.

14. Object Slicing Demonstration
Demonstrates object slicing when a derived object is passed by value as a base object and shows how passing by reference preserves polymorphic behavior.

15. Payment Processing System
Implements a small payment-processing example using an abstract Payment interface and derived payment classes for card, UPI, and net banking.

16. Employee Payroll Mini-Project
Implements an employee payroll application using an abstract Employee class, derived employee types, salary calculation, function overriding, and run-time polymorphism.

## Concepts Covered

The programs in this unit cover the following major concepts:

Function Overloading
Compile-Time Polymorphism
Unary Operator Overloading
Prefix Operator Overloading
Postfix Operator Overloading
Binary Operator Overloading
Relational Operator Overloading
Friend/Non-Member Operator Overloading
Static Binding
Run-Time Polymorphism
Base-Class Pointers
Base-Class References
Virtual Functions
Function Overriding
Abstract Classes
Pure Virtual Functions
Polymorphic Collections
Virtual Destructors
Object Slicing
Smart Pointers
Inheritance
Real-World Polymorphic Applications

## Learning Objective

After completing the programs in this unit, the learner should be able to understand and implement compile-time and run-time polymorphism in C++, overload functions and operators, use virtual functions with base-class pointers and references, create abstract classes with pure virtual functions, apply virtual destructors for safe polymorphic cleanup, understand object slicing, and use polymorphism to build small practical applications.
