#include <iostream>
#include <string>
#include <utility>
using namespace std;

class Employee {
protected:
    string employeeName;

public:
    explicit Employee(string name) : employeeName(move(name)) {}
};

class Developer : public Employee {
private:
    string skill;

public:
    Developer(string name, string language)
        : Employee(name), skill(language) {}

    void showProfile() const {
        cout << "Developer: " << employeeName << '\n';
        cout << "Language: " << skill << '\n';
    }
};

int main() {
    Developer developer("Prashant", "C++");
    developer.showProfile();
    return 0;
}
