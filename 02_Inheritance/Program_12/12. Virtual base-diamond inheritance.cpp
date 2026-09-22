#include <iostream>
#include <string>

class Person {
protected:
    std::string name;

public:
    explicit Person(const std::string& personName) : name(personName) {}

    void showName() const {
        std::cout << "Name: " << name << '\n';
    }
};

class Student : virtual public Person {
public:
    Student() : Person("Unknown") {}
};

class Employee : virtual public Person {
public:
    Employee() : Person("Unknown") {}
};

class TeachingAssistant : public Student, public Employee {
public:
    explicit TeachingAssistant(const std::string& assistantName)
        : Person(assistantName), Student(), Employee() {}
};

int main() {
    TeachingAssistant assistant("Riya");
    assistant.showName();
    return 0;
}
