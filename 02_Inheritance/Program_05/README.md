# Program 05

## Aim
To implement hierarchical inheritance in which multiple derived classes share a common Vehicle base class.

## Problem Statement
Create Vehicle with a registration number and start() function. Derive Car and Bike from Vehicle, giving each derived class its own specialized function. Create objects of both derived classes and invoke common and specialized behavior.

## Concepts Used
- Hierarchical inheritance
- Common base class
- Public inheritance
- Protected member
- Constructors
- Specialized member functions

## Sample Input
The program creates one Car and one Bike with different registration numbers. Each object first uses the inherited start() function and then invokes its own specialized operation.

## Sample Output
```text
Vehicle MH12AB1234 started
Car boot opened
Vehicle MH12CD5678 started
Please wear a helmet
```

## Explanation
Vehicle is the common base class. Both Car and Bike inherit from it independently, so each derived object receives the common registration data and start() behavior. Car adds openBoot(), while Bike adds helmetReminder(). This is hierarchical inheritance because one base class has multiple direct derived classes.
