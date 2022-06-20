#include <iostream>

class Student {
private:
    int ID;
    std::string fullName;
    double HWs[3];
    double HWaverage;
public:
    int getID() {
        return ID;
    }

    std::string getFullName() {
        return fullName;
    }

    double *getHWs() {
        return HWs;
    }

    double getHWaverage() {
        return HWaverage;
    }

    void setID(int id) {
        ID = id;
    }

    void setFullName(const std::string &fullName) {
        Student::fullName = fullName;
    }

    void setHWaverage(double hWaverage) {
        HWaverage = hWaverage;
    }
};

int main() {
    Student *student = new Student;

    std::cout << "Enter id: ";
    int id;
    std::cin >> id;
    student->setID(id);

    std::cin.ignore();
    std::cout << "Enter full name: ";
    std::string fullName;
    getline(std::cin, fullName);
    student->setFullName(fullName);

    double total = 0;
    for (int i = 0; i < 3; i++) {
        std::cout << "Enter homework " << i + 1 << ": ";
        double hw;
        std::cin >> hw;
        student->getHWs()[i] = hw;
        total += hw;
    }

    double average = total / 3;
    student->setHWaverage(average);

    std::cout << "ID: " << student->getID();
    std::cout << "\nFull name: " << student->getFullName();
    for (int i = 0; i < 3; i++)
        std::cout << "\nHW " << i + 1 << ": " << student->getHWs()[i];
    std::cout << "\nAverage: " << student->getHWaverage();
    return 0;
}