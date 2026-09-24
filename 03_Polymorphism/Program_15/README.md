# Program 15

## Aim
To implement a real-world polymorphic payment system.

## Problem Statement
Write a C++ program using an abstract Payment interface and derived payment classes for card, UPI, and net-banking payments.

## Concepts Used
- Abstract base class
- Pure virtual function
- Derived classes
- Run-time polymorphism
- Base reference
- Virtual destructor

## Sample Input
No user input. Payments of Rs. 1250, Rs. 750, and Rs. 500 are processed using card, UPI, and net banking respectively.

## Sample Output
Paid Rs. 1250 using card
Paid Rs. 750 using UPI
Paid Rs. 500 using net banking

## Explanation
The Payment class provides an abstract pay() interface. CardPayment, UpiPayment, and NetBankingPayment implement the function differently. processPayment() accepts a base reference, allowing the correct derived implementation to execute at run time.
