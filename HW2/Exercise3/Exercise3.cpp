#include <iostream>

void myAddition(int x, int *y) {
    int sum = x + *y;
    *y = sum;
}

int main() {
    int x, y;

    std::cout << "Enter number 1: ";
    std::cin >> x;
    std::cout << "Enter number 2: ";
    std::cin >> y;

    myAddition(x, &y);
    std::cout << y;

    return 0;
}