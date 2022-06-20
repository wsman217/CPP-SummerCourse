#include <iostream>

class Student {
private:
    int ID[5] = {10, 20, 30, 40, 50};

public:
    int operator[](int index) {
        if (index > 4) {
            std::cout << "Array index out of bounds.";
            exit(0);
        }

        return ID[index];
    }
};

int main() {
    Student student;

    for (int i = 0; i < 6; i++) {
        std::cout << "Student ID of " << i << ": " << student[i] << "\n";
    }

    return 0;
}