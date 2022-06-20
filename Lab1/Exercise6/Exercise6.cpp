#include <iostream>

int main() {
    char tempType;
    std::cout << "Enter \"C\" for Celsius and \"F\" for Fahrenheit: ";
    std::cin >> tempType;

    int temp;
    std::cout << "Enter the temp to convert: ";
    std::cin >> temp;

    switch (tempType) {
        case 'c':
        case 'C':
            std::cout << (temp - 32) * (5.0 / 9.0) << "F";
            return 0;
        case 'f':
        case 'F':
            std::cout << (temp * (9 / 5.0)) + 32 << "C";
            return 0;
        default:
            std::cout << "C or F was not entered.";
            return 0;
    }
}