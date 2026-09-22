#include <iostream>
#include <string>

class Person {
protected:
    std::string name;

public:
    explicit Person(const std::string& personName) : name(personName) {}

    void showPerson() const {
        std::cout << "Name: " << name << '\n';
    }
};

class Employee : public Person {
protected:
    int id;

public:
    Employee(const std::string& employeeName, int employeeId)
        : Person(employeeName), id(employeeId) {}

    void showEmployee() const {
        std::cout << "Employee ID: " << id << '\n';
    }
};

class Manager : public Employee {
private:
    int members;

public:
    Manager(const std::string& managerName, int employeeId, int teamMembers)
        : Employee(managerName, employeeId), members(teamMembers) {}

    void showManager() const {
        showPerson();
        showEmployee();
        std::cout << "Team Size: " << members << '\n';
    }
};

int main() {
    Manager manager("Arjun", 501, 8);
    manager.showManager();
    return 0;
}
