#include <iostream>

struct Student {
    int id;
    double gpa;
};

void myStructFunction(Student arr[]) {
    for (int i = 0; i < 3; i++) {
        arr[i].id = i + 10;
        arr[i].gpa = -arr[i].gpa;
    }

    for (int i = 0; i < 3; i++) {
        std::cout << "ID: " << arr[i].id << " GPA: " << arr[i].gpa << "\n";
    }
}

int main() {
    const int SIZE = 3;
    Student arr[SIZE], *ptr;
    ptr = arr;

    for (int i = 0; i < 3; i++) {
        std::cout << "Enter student id: ";
        std::cin >> (*ptr).id;
        std::cout << "Enter student gpa: ";
        std::cin >> (*ptr).gpa;
        ptr++;
    }

    myStructFunction(arr);

    for (auto i : arr) {
        std::cout << "ID: " << i.id << " GPA: " << i.gpa << "\n";
    }

    return 0;
}