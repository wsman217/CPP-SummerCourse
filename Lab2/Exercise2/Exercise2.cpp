#include <iostream>

#define ROWS 3
#define COLUMNS 3

int main() {

    int array[ROWS][COLUMNS];

    for (auto &i: array) {
        for (int &j: i) {
            int number;
            std::cout << "Enter a number to add to the array: ";
            std::cin >> number;
            j = number;
        }
    }

    for (auto &i: array) {
        for (int j: i)
            std::cout << j << "\t";
        std::cout << "\n";
    }
}