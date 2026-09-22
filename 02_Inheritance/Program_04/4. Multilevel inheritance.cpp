#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    explicit Person(const string& personName) : name(personName) {}

    void showPerson() const {
        cout << "Name: " << name << '\n';
    }
};

class Employee : public Person {
protected:
    int id;

public:
    Employee(const string& employeeName, int employeeId)
        : Person(employeeName), id(employeeId) {}

    void showEmployee() const {
        cout << "Employee ID: " << id << '\n';
    }
};

class Manager : public Employee {
private:
    int members;

public:
    Manager(const string& managerName, int employeeId, int teamMembers)
        : Employee(managerName, employeeId), members(teamMembers) {}

    void showManager() const {
        showPerson();
        showEmployee();
        cout << "Team Size: " << members << '\n';
    }
};

int main() {
    Manager manager("Arjun", 501, 8);
    manager.showManager();
    return 0;
}
