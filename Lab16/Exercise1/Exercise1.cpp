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
    Student student1;
    Student student2;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (student1[i] == student2[j])
                std::cout << "Student IDs " << i << " and " << j << " are equal.\n";
            if (student1[i] > student2[j])
                std::cout << "Student ID " << i << " is greater than " << j << ".\n";
            if (student1[i] < student2[j])
                std::cout << "Student ID " << i << " is less than " << j << ".\n";
        }
    }

    return 0;
}