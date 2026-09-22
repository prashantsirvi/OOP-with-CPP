#include <iostream>
using namespace std;

class Base {
public:
    void show() const {
        cout << "Base class function\n";
    }
};

class PublicChild : public Base {
};

class PrivateChild : private Base {
public:
    void useBaseFunction() const {
        show();
    }
};

int main() {
    PublicChild first;
    first.show();

    PrivateChild second;
    second.useBaseFunction();

    // second.show(); // Not accessible: inherited privately.
    return 0;
}
