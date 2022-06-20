#include <iostream>

class Student {
private:
    double GPA;

public:
    Student(double GPA) {
        this->GPA = GPA;
    }

    bool operator>(Student student) {
        return this->GPA >= student.GPA;
    }

};

int main() {
    Student student1 = *new Student(2.4);
    Student student2 = *new Student(3.4);

    std::cout << "Student1 is greater than Student2: " << (student1 > student2 ? "True" : "False");
    return 0;
}