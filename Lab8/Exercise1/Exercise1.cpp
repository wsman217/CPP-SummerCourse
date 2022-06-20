#include <iostream>

struct Student {
    int id;
    double gpa;
};

int main() {
    Student *ptr, student{};
    ptr = &student;

    std::cout << "Enter student id: ";
    std::cin >> (*ptr).id;
    std::cout << "Enter student gpa: ";
    std::cin >> (*ptr).gpa;

    std::cout << "ID: " << (*ptr).id << " GPA: " << (*ptr).gpa;
    return 0;
}