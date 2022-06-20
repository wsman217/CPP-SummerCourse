#include <iostream>

class Student {
private:
    unsigned int ID;
    double GPA;

public:
    Student(unsigned int ID, double GPA) {
        this->ID = ID;
        this->GPA = GPA;
    }

    bool operator==(Student student) {
        return this->ID == student.ID && this->GPA == student.GPA;
    }
};

int main() {
    Student student1 = *new Student(0, 2.5);
    Student student2 = *new Student(0, 2.5);

    std::cout << "Student1 is equal to Student2: " << (student1 == student2 ? "true" : "false") << ".";

    return 0;
}