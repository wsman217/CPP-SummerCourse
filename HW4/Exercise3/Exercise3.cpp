#include <iostream>

int main() {
    int size;
    std::cout << "Enter size of array: ";
    std::cin >> size;

    int *arr = new int[size];

    for (int i = 0; i < size; i++) {
        std::cout << "Enter a number: ";
        std::cin >> *arr;
        arr++;
    }

    int sum = 0;
    arr -= size;
    for (int i = 0; i < size; i++) {
        sum += *arr;
        arr++;
    }

    std::cout << "Sum: " << sum;
    arr -= size;
    delete[] arr;
    return 0;
}