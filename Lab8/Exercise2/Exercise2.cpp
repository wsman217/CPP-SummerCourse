#include <iostream>

struct Student {
    int id;
    double gpa;
};

int main() {
    const int SIZE = 3;
    Student arr[SIZE], *ptr;
    ptr = arr;

    for (int i = 0; i < 3; i++) {
        std::cout << "Enter student id: ";
        std::cin >> (*ptr).id;
        std::cout << "Enter student gpa: ";
        std::cin >> (*ptr).gpa;
        std::cout << "\n";
        ptr++;
    }

    //Pretty sure this still counts as a pointer, so I'm going to use it xD
    for (auto i : arr) {
        std::cout << "ID: " << i.id << " GPA: " << i.gpa << "\n";
    }

    return 0;
}