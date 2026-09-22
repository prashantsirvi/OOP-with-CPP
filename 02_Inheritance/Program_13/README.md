# Program 13

## Aim
To demonstrate how a friend class can access private data of another class when explicit friendship is granted.

## Problem Statement
Create Account with a private balance and declare Auditor as a friend class. Let Auditor inspect and print the private balance.

## Concepts Used
- Friend class
- Private data
- Access permission
- Classes and objects
- Encapsulation

## Sample Input
The program creates an Account with an initial balance of 5000. An Auditor object receives the Account by const reference and prints the private balance using its friendship privilege.

## Sample Output
```text
Account Balance: 5000
```

## Explanation
Account keeps balance private, preventing ordinary external access. The declaration friend class Auditor grants Auditor special access to Account's private members. Auditor::inspect() can therefore read account.balance directly. Friendship is a deliberate exception to normal access control and should be used only when the design requires it.
