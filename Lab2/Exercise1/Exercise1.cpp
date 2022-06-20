#include <iostream>

#define ARRAY_SIZE 5

int main() {

    int array[ARRAY_SIZE];

    for (int &i: array) {
        int number;
        std::cout << "Enter a number to add to the array: ";
        std::cin >> number;
        i = number;
    }

    for (int i: array)
        std::cout << i << "\n";
}