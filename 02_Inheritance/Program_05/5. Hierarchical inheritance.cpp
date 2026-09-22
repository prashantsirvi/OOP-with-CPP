#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string registration;

public:
    explicit Vehicle(const string& number) : registration(number) {}

    void start() const {
        cout << "Vehicle " << registration << " started\n";
    }
};

class Car : public Vehicle {
public:
    explicit Car(const string& number) : Vehicle(number) {}

    void openBoot() const {
        cout << "Car boot opened\n";
    }
};

class Bike : public Vehicle {
public:
    explicit Bike(const string& number) : Vehicle(number) {}

    void helmetReminder() const {
        cout << "Please wear a helmet\n";
    }
};

int main() {
    Car car("MH14XY1234");
    Bike bike("MH14YZ5678");

    car.start();
    car.openBoot();

    bike.start();
    bike.helmetReminder();
    return 0;
}
