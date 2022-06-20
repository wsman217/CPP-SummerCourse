#include <iostream>

const int size = 3;

struct Student {
    int ID;
    double GPA;
};

Student* myFunction(Student arr[size]) {
    Student *ptr = arr;
    Student *largest = ptr;
    double largestGPA = ptr -> GPA;
    ptr++;
    for (int i = 0; i < size - 1; i++) {
        if (largestGPA > ptr -> GPA)
            continue;
        largestGPA = ptr -> GPA;
        largest = ptr;
        ptr++;
    }

    return largest;
}

int main() {
    Student arr[size];

    for (auto &i : arr) {
        std::cout << "Enter ID: ";
        std::cin >> i.ID;
        std::cout << "Enter GPA: ";
        std::cin >> i.GPA;
    }

    Student *largest = myFunction(arr);

    std::cout << "ID: " << largest -> ID << "\n";
    std::cout << "GPA: " << largest -> GPA;

    return 0;
}