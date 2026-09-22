#include <iostream>
#include <string>

class Person {
protected:
    std::string name;

public:
    explicit Person(const std::string& personName) : name(personName) {}
};

class Student : public Person {
private:
    int rollNo;

public:
    Student(const std::string& studentName, int roll)
        : Person(studentName), rollNo(roll) {}

    void show() const {
        std::cout << "Name: " << name << '\n';
        std::cout << "Roll Number: " << rollNo << '\n';
    }
};

int main() {
    Student student("Ishita", 24);
    student.show();
    return 0;
}
