#include <iostream>

#define SIZE 3

struct Student {
    int HWgrades[3];
    double HWaverage;
    int ID;
};

Student arr[SIZE];

int main() {
    Student *ptr = arr;

    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int &HWgrade : ptr -> HWgrades) {
            int grade;
            std::cout << "Enter homework grade: ";
            std::cin >> grade;
            HWgrade = grade;
            sum += grade;
        }

        double average = sum / 3.0;
        ptr -> HWaverage = average;

        int id;
        std::cout << "Enter ID: ";
        std::cin >> id;
        ptr -> ID = id;

        ptr++;
    }

    ptr -= 3;

    for (int i = 0; i < 3; i++) {
        std::cout << "Homework Grades: {";
        for (int j = 0; j < 3; j++) {
            std::cout << ptr -> HWgrades[j];
            if (j != 2)
                std::cout << ", ";
        }
        std::cout << "}\n";

        std::cout << "Average: " << ptr -> HWaverage << "\n";
        std::cout << "ID: " << ptr -> ID << "\n\n";
        ptr++;
    }

    return 0;
}