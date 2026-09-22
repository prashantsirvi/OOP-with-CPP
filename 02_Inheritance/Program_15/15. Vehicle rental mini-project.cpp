#include <iostream>
#include <string>
#include <iomanip>

class Vehicle {
protected:
    std::string registration;
    double dailyRate;

public:
    Vehicle(const std::string& number, double rate)
        : registration(number), dailyRate(rate) {}

    virtual double rentFor(int days) const {
        return dailyRate * days;
    }

    virtual void showDetails() const {
        std::cout << "Registration: " << registration << '\n';
        std::cout << "Rate per day: " << dailyRate << '\n';
    }

    virtual ~Vehicle() = default;
};

class Car : public Vehicle {
private:
    int doors;

public:
    Car(const std::string& number, double rate, int doorCount)
        : Vehicle(number, rate), doors(doorCount) {}

    void showDetails() const override {
        Vehicle::showDetails();
        std::cout << "Doors: " << doors << '\n';
    }
};

class Bike : public Vehicle {
private:
    int engineCC;

public:
    Bike(const std::string& number, double rate, int capacity)
        : Vehicle(number, rate), engineCC(capacity) {}

    double rentFor(int days) const override {
        return dailyRate * days * 0.90;
    }

    void showDetails() const override {
        Vehicle::showDetails();
        std::cout << "Engine Capacity: " << engineCC << " cc\n";
    }
};

int main() {
    Car car("MH14XY1234", 2000.0, 5);
    Bike bike("MH14YZ5678", 800.0, 150);

    std::cout << "Car Details\n";
    car.showDetails();
    std::cout << "Rent for 3 days: " << car.rentFor(3) << "\n\n";

    std::cout << "Bike Details\n";
    bike.showDetails();
    std::cout << "Rent for 3 days: " << bike.rentFor(3) << '\n';

    return 0;
}
