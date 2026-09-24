#include <iostream>
using namespace std;

int add(int first, int second) {
    return first + second;
}

double add(double first, double second) {
    return first + second;
}

int add(int first, int second, int third) {
    return first + second + third;
}

int main() {
    cout << "Sum of two integers: " << add(10, 20) << '\n';
    cout << "Sum of two doubles: " << add(2.5, 3.7) << '\n';
    cout << "Sum of three integers: " << add(10, 20, 30) << '\n';

    return 0;
}
