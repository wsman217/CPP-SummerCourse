#include <iostream>

int myPower(int x) {
    return x * x;
}

double myPower(double y) {
    return y * y;
}

int main() {
    int x;
    double y;

    std::cout << "Enter an integer: ";
    std::cin >> x;

    std::cout << "Enter a double: ";
    std::cin >> y;

    std::cout << "Square of x: " << myPower(x) << "\nSquare of y: " << myPower(y) << std::endl;
    return 0;
}