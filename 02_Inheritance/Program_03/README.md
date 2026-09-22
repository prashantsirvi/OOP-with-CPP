# Program 03

## Aim
To observe the difference between public and private inheritance and how the inheritance mode affects access to a base-class public member.

## Problem Statement
Create a Base class with a public show() function. Derive one class publicly and another privately. Call show() directly through the public-derived object and through a wrapper member function in the private-derived class.

## Concepts Used
- Public inheritance
- Private inheritance
- Access control
- Base and derived classes
- Member functions

## Sample Input
Two objects are created. publicObject.show() is valid because the inheritance is public. privateObject.callBaseShow() is used because show() is private through private inheritance. The commented direct call demonstrates the access error without preventing compilation.

## Sample Output
```text
Base public function
Base public function
```

## Explanation
PublicDerived inherits Base publicly, so Base::show() remains public when accessed through a PublicDerived object. PrivateDerived inherits Base privately, so the inherited public member becomes private in PrivateDerived and cannot be called directly from outside. The class therefore provides callBaseShow() as a public member that internally calls show().