#include <iostream>

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap(double &x, double &y) {
    double temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 10, b = 20;
    double x = 100, y = 200;

    swap(a, b);
    swap(x, y);

    std::cout << "a is: " << a << " b is: " << b << std::endl;
    std::cout << "x is: " << x << " y is: " << y << std::endl;
    return 0;
}