# Program 07

## Aim
To understand how a static data member is shared by all objects of a class and can be used to count object creation.

## Problem Statement
Write a C++ program to count how many Student objects are created using a static data member.

## Concepts Used
- Static data member
- Class-level shared data
- Constructor
- Object counting
- Scope resolution operator

## Sample Input
No user input. Three Student objects are created: s1, s2, and s3.

## Sample Output
3

## Explanation
The static member count is shared by all Student objects. Each constructor call increases count by one. Student::count defines the shared member, and after three objects are created its value is 3.
