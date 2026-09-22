#include <iostream>
#include <string>
#include <utility>
using namespace std;

class Person {
protected:
    string name;

public:
    explicit Person(string personName) : name(move(personName)) {}

    void printName() const {
        cout << "Name: " << name << '\n';
    }
};

class Student : public Person {
private:
    int rollNo;

public:
    Student(string studentName, int roll)
        : Person(move(studentName)), rollNo(roll) {}

    void printDetails() const {
        printName();
        cout << "Roll Number: " << rollNo << '\n';
    }
};

int main() {
    Student student("Prashant", 33);
    student.printDetails();
    return 0;
}
