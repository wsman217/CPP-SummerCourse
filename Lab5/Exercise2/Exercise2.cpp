#include <iostream>

int main() {
    int matrix[3][3];

    for (auto &i : matrix) {
        for (int &j : i) {
            std::cout << "Enter a number: ";
            std::cin >> j;
        }
    }

    for (auto &i : matrix) {
        for (int &j : i) {
            printf("Decimal: %d Hex: %x\n", &j, &j);
        }
    }

    return 0;
}