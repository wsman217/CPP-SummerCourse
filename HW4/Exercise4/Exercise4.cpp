#include <iostream>
#include "memory"

int main() {
    int size;
    std::cout << "Enter size of array: ";
    std::cin >> size;

    std::unique_ptr<int[]> arr(new int[size]);

    for (int i = 0; i < size; i++) {
        std::cout << "Enter a number: ";
        std::cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    std::cout << "Sum: " << sum;
    return 0;
}