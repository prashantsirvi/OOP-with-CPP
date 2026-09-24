#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {
        cout << "Base destructor\n";
    }
};

class Derived : public Base {
public:
    ~Derived() override {
        cout << "Derived destructor\n";
    }
};

int main() {
    Base* pointer = new Derived();

    delete pointer;

    return 0;
}
