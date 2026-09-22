#include <iostream>
#include <string>

class University {
public:
    class Department {
    private:
        std::string departmentName;

    public:
        explicit Department(const std::string& name)
            : departmentName(name) {}

        void show() const {
            std::cout << "Department: " << departmentName << '\n';
        }
    };
};

int main() {
    University::Department department(
        "Artificial Intelligence and Data Science"
    );

    department.show();
    return 0;
}
