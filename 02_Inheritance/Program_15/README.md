# Program 15

## Aim
To build a small inheritance-based vehicle rental system in which different vehicle types can share common details while customizing behavior.

## Problem Statement
Create Vehicle with registration number and daily rental rate. Derive Car and Bike with additional attributes. Override calculateRent() for Bike and override display() in both derived classes. Calculate three-day rental charges.

## Concepts Used
- Inheritance
- Function overriding
- Virtual functions
- Constructors
- Base-class behavior
- Mini-project design
- Run-time polymorphism concepts

## Sample Input
The program creates a Car costing 2000 per day and a Bike costing 800 per day. For three days, the car costs 6000. The bike's normal total is 2400, but its overridden calculation applies a 0.9 factor, producing 2160. The output also shows each vehicle's specific details.

## Sample Output
```text
Car Details
Registration: MH12AB1234
Rate per day: 2000
Doors: 5
Rent for 3 days: 6000

Bike Details
Registration: MH12CD5678
Rate per day: 800
Engine Capacity: 150 cc
Rent for 3 days: 2160
```

## Explanation
Vehicle stores common registration and rate information and provides virtual calculateRent() and display() functions. Car adds numberOfDoors and extends display(). Bike adds engineCapacity and overrides calculateRent() to apply a 10 percent reduction. Both derived classes reuse Vehicle::display() before showing their own details.
