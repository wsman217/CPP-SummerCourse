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
    Student student;

    std::cout << "Enter ID: ";
    int id;
    std::cin >> id;
    student.setID(id);

    std::cout << "Enter GPA: ";
    double gpa;
    std::cin >> gpa;
    student.setGPA(gpa);

    std::cin.ignore();

    std::cout << "Enter Major: ";
    std::string major;
    getline(std::cin, major);
    student.setMajor(major);

    std::cout << "ID: " << student.getID();
    std::cout << "\nGPA: " << student.getGPA();
    std::cout << "\nMajor: " << student.getMajor();
    return 0;
}