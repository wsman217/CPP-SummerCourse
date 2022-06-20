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
    Student student, *ptr = &student;

    std::cout << "Enter ID: ";
    int id;
    std::cin >> id;
    ptr->setID(id);

    std::cout << "Enter GPA: ";
    double gpa;
    std::cin >> gpa;
    ptr->setGPA(gpa);

    std::cin.ignore();

    std::cout << "Enter Major: ";
    std::string major;
    getline(std::cin, major);
    ptr->setMajor(major);

    std::cout << "ID: " << ptr->getID();
    std::cout << "\nGPA: " << ptr->getGPA();
    std::cout << "\nMajor: " << ptr->getMajor();
    return 0;
}