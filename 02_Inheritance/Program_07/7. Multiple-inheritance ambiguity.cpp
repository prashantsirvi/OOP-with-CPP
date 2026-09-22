#include <iostream>

class Academics {
public:
    void display() const {
        std::cout << "Academic information\n";
    }
};

class Sports {
public:
    void display() const {
        std::cout << "Sports information\n";
    }
};

class Student : public Academics, public Sports {
public:
    void displayBoth() const {
        Academics::display();
        Sports::display();
    }
};

int main() {
    Student student;

    student.Academics::display();
    student.Sports::display();

    student.displayBoth();
    return 0;
}
