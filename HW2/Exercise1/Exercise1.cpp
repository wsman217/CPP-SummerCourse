#include <iostream>

int studentID() {
    std::cout << "Enter student ID: ";
    int id;
    std::cin >> id;
    std::cin.ignore();
    return id;
}

std::string studentFullName() {
    std::cout << "Enter student full name: ";
    std::string fullName;
    getline(std::cin, fullName);
    return fullName;
}

double studentGPA() {
    std::cout << "Enter student GPA: ";
    double gpa;
    std::cin >> gpa;
    return gpa;
}

void printStudentID(int id) {    std::cout << id << "\n";    }

void printStudentFullName(std::string fullName) {    std::cout << fullName << "\n";    }

void printStudentGPA(double gpa) {    std::cout << gpa << "\n";    }

int main() {
    int id = studentID();
    std::string fullName = studentFullName();
    double gpa = studentGPA();

    printStudentID(id);
    printStudentFullName(fullName);
    printStudentGPA(gpa);

    return 0;
}