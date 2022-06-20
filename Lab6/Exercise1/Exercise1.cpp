#include <iostream>

int main() {
    int xVal = 0, yVal = 0;
    int *x = &xVal, *y = &yVal;

    std::cout << "Enter number 1: ";
    std::cin >> *x;
    std::cout << "Enter number 2: ";
    std::cin >> *y;

    *x += 5;
    y = x;
    *y = 30;
    int sum = *x + *y;
    std::cout << sum << " " << xVal << " " << yVal << " " << x << " " << y;
    return 0;
}