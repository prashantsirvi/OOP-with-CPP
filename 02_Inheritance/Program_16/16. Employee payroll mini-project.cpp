#include <iostream>
#include <string>

class Employee {
protected:
    int id;
    std::string name;

public:
    Employee(int employeeId, const std::string& employeeName)
        : id(employeeId), name(employeeName) {}

    virtual double calculateSalary() const = 0;

    void showBasicDetails() const {
        std::cout << "Employee ID: " << id << '\n';
        std::cout << "Name: " << name << '\n';
    }

    virtual ~Employee() = default;
};

class PermanentEmployee : public Employee {
private:
    double basic;
    double allowance;

public:
    PermanentEmployee(int employeeId, const std::string& employeeName,
                       double salary, double extra)
        : Employee(employeeId, employeeName),
          basic(salary), allowance(extra) {}

    double calculateSalary() const override {
        return basic + allowance;
    }
};

class ContractEmployee : public Employee {
private:
    double hourlyRate;
    int hours;

public:
    ContractEmployee(int employeeId, const std::string& employeeName,
                     double rate, int workedHours)
        : Employee(employeeId, employeeName),
          hourlyRate(rate), hours(workedHours) {}

    double calculateSalary() const override {
        return hourlyRate * hours;
    }
};

void printPaySlip(const Employee& employee) {
    employee.showBasicDetails();
    std::cout << "Salary: " << employee.calculateSalary() << "\n\n";
}

int main() {
    PermanentEmployee permanent(101, "Asha", 40000.0, 8000.0);
    ContractEmployee contract(102, "Vikas", 500.0, 80);

    printPaySlip(permanent);
    printPaySlip(contract);
    return 0;
}
