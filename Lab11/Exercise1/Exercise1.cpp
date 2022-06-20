#include <iostream>

class Student {
private:
    int ID = 0;
    double GPA = 0.0;
    std::string Major;

public:
    void setID(int id) {
        ID = id;
    }

    void setGPA(double gpa) {
        GPA = gpa;
    }

    void setMajor(std::string major) {
        Major = major;
    }

    int getID() {
        return ID;
    }

    double getGPA() {
        return GPA;
    }

    std::string getMajor() {
        return Major;
    }
};

int main() {
    Student *student = new Student;
    std::cout << "Enter ID: ";
    int id;
    std::cin >> id;
    student->setID(id);

    std::cout << "Enter GPA: ";
    double gpa;
    std::cin >> gpa;
    student->setGPA(gpa);

    std::cin.ignore();
    std::cout << "Enter Major: ";
    std::string major;
    getline(std::cin, major);
    student->setMajor(major);

    std::cout << "ID: " << student->getID();
    std::cout << "\nGPA: " << student->getGPA();
    std::cout << "\nMajor: " << student->getMajor();

    Student *student2 = new Student;
    std::cout << "\nEnter ID: ";
    std::cin >> id;
    student2->setID(id);

    std::cout << "Enter GPA: ";
    std::cin.ignore();
    std::cin >> gpa;
    student2->setGPA(gpa);

    std::cin.ignore();
    std::cout << "Enter Major: ";
    getline(std::cin, major);
    student2->setMajor(major);

    std::cout << "ID: " << student2->getID();
    std::cout << "\nGPA: " << student2->getGPA();
    std::cout << "\nMajor: " << student2->getMajor();

    delete student;
    delete student2;
    return 0;
}