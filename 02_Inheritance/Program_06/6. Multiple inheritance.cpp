#include <iostream>

class Academics {
protected:
    int marks;

public:
    explicit Academics(int score) : marks(score) {}

    void showAcademicMarks() const {
        std::cout << "Academic Marks: " << marks << '\n';
    }
};

class Sports {
protected:
    int score;

public:
    explicit Sports(int points) : score(points) {}

    void showSportsScore() const {
        std::cout << "Sports Marks: " << score << '\n';
    }
};

class Student : public Academics, public Sports {
public:
    Student(int academicScore, int sportsScore)
        : Academics(academicScore), Sports(sportsScore) {}

    void showCombinedScore() const {
        std::cout << "Total Marks: " << marks + score << '\n';
    }
};

int main() {
    Student student(80, 15);
    student.showAcademicMarks();
    student.showSportsScore();
    student.showCombinedScore();
    return 0;
}
