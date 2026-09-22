# Unit 02 — Inheritance

## Overview

This unit focuses on **Inheritance in Object-Oriented Programming using C++**. It covers different forms of inheritance, access control, constructor and destructor behavior, function overriding, abstract classes, virtual base classes, friend classes, nested classes, and inheritance-based mini-projects.

The programs in this unit are designed to demonstrate the practical implementation of inheritance and related Object-Oriented Programming concepts using C++.

---

## List of Programs

### 1. Single Inheritance

Demonstrates the basic concept of **single inheritance**, where one derived class inherits from a single base class. The program uses a `Person` class as the base class and a `Student` class as the derived class.

### 2. Protected Members

Demonstrates how a **protected data member** of a base class can be accessed directly within a derived class while remaining inaccessible from outside the class hierarchy.

### 3. Public/Private Inheritance

Demonstrates the difference between **public inheritance and private inheritance** and how the accessibility of inherited members changes depending on the inheritance mode.

### 4. Multilevel Inheritance

Demonstrates **multilevel inheritance**, where inheritance takes place through multiple levels of classes. The example follows a `Person → Employee → Manager` hierarchy.

### 5. Hierarchical Inheritance

Demonstrates **hierarchical inheritance**, where multiple derived classes inherit from the same base class. The example uses `Vehicle` as a common base class for `Car` and `Bike`.

### 6. Multiple Inheritance

Demonstrates **multiple inheritance**, where a single derived class inherits from more than one base class. The example combines academic and sports information to calculate a student's total marks.

### 7. Multiple-Inheritance Ambiguity

Demonstrates the ambiguity that can occur when multiple base classes contain member functions with the same name. The **scope-resolution operator** is used to explicitly identify the required base-class function.

### 8. Constructor/Destructor Order

Demonstrates the order in which **constructors and destructors** are executed when an object of a derived class is created and destroyed. It shows that base-class construction occurs before derived-class construction, while destruction occurs in the reverse order.

### 9. Parameterized Base Constructor

Demonstrates how a **derived-class constructor initializes a parameterized base-class constructor** using a constructor initializer list.

### 10. Function Overriding

Demonstrates **function overriding** using a virtual function. Derived classes provide their own implementations of a base-class function, illustrating run-time polymorphic behavior.

### 11. Abstract Class

Demonstrates the use of an **abstract class** containing a pure virtual function. Derived classes provide implementations of the required function, while the abstract base class itself cannot be instantiated.

### 12. Virtual Base / Diamond Inheritance

Demonstrates **diamond inheritance** and the use of a **virtual base class** to prevent duplicate copies of the common base class within the derived hierarchy.

### 13. Friend Class

Demonstrates the concept of a **friend class**, which allows a designated class to access private members of another class when such access is explicitly granted.

### 14. Nested Class

Demonstrates how a **class can be defined inside another class**. The nested class is accessed using the scope of its enclosing class.

### 15. Vehicle Rental Mini-Project

Implements a small **vehicle rental system** using inheritance. It demonstrates a common `Vehicle` base class with specialized `Car` and `Bike` classes, along with overridden behavior for calculating rental charges and displaying vehicle details.

### 16. Employee Payroll Mini-Project

Implements an **employee payroll system** using an abstract base class and derived employee types. It demonstrates inheritance, pure virtual functions, function overriding, constructors, and a polymorphic interface for calculating employee salaries.

---

## Concepts Covered

The programs in this unit cover the following major concepts:

* Single Inheritance
* Protected Members
* Public Inheritance
* Private Inheritance
* Multilevel Inheritance
* Hierarchical Inheritance
* Multiple Inheritance
* Multiple-Inheritance Ambiguity
* Scope-Resolution Operator
* Constructor and Destructor Order
* Parameterized Base Constructors
* Function Overriding
* Virtual Functions
* Abstract Classes
* Pure Virtual Functions
* Virtual Base Classes
* Diamond Inheritance
* Friend Classes
* Nested Classes
* Polymorphism
* Inheritance-based Mini-Projects

---

## Learning Objective

After completing the programs in this unit, the learner should be able to understand and implement different forms of inheritance in C++, control accessibility between base and derived classes, work with constructors and destructors in inheritance hierarchies, implement function overriding and abstract classes, handle diamond inheritance using virtual base classes, and apply inheritance concepts to small practical applications.
