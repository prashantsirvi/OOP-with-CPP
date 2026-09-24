#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imaginary;

public:
    Complex(int realPart = 0, int imaginaryPart = 0)
        : real(realPart), imaginary(imaginaryPart) {}

    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    void display() const {
        cout << real;
        if (imaginary >= 0) {
            cout << " + ";
        } else {
            cout << " - ";
        }

        cout << (imaginary >= 0 ? imaginary : -imaginary) << "i\n";
    }
};

int main() {
    Complex first(2, 3);
    Complex second(4, 5);
    Complex sum = first + second;

    cout << "First complex number: ";
    first.display();

    cout << "Second complex number: ";
    second.display();

    cout << "Sum: ";
    sum.display();

    return 0;
}
