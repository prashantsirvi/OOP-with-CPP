#include <iostream>
#include <string>

class Vehicle {
protected:
    std::string registration;

public:
    explicit Vehicle(const std::string& number) : registration(number) {}

    void start() const {
        std::cout << "Vehicle " << registration << " started\n";
    }
};

class Car : public Vehicle {
public:
    explicit Car(const std::string& number) : Vehicle(number) {}

    void openBoot() const {
        std::cout << "Car boot opened\n";
    }
};

class Bike : public Vehicle {
public:
    explicit Bike(const std::string& number) : Vehicle(number) {}

    void helmetReminder() const {
        std::cout << "Please wear a helmet\n";
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
