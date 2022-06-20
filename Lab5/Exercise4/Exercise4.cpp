#include <iostream>

void myArrayFunction(int array[5]) {
    int sum = 0;

    for (auto i = 0; i < 5; i++) {
        sum += array[i];
    }

    array[0] = (sum / 5);
}

int main() {
    int array[5];
    for (int &i : array) {
        std::cout << "Enter a number: ";
        std::cin >> i;
    }

    myArrayFunction(array);

    std::cout << array[0];
    return 0;
}