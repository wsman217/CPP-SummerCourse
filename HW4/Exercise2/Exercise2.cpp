#include <iostream>

int main() {
    int x = 20;
    int &y = x;
    int *z = &y;

    y += 22;

    std::cout << "y: " << y << " x: " << x;
    std::cout << "\n&x: " << &x << " &y: " << &y << " &z: " << &z;
    return 0;
}