#include <iostream>

int myAddition(int x, int y) {
    return x + y;
}

int myAddition(int x, int y, int z) {
    return x + y + z;
}

int main() {
    int x, y, z;

    std::cout << "Enter 3 numbers: ";
    std::cin >> x >> y >> z;

    std::cout << myAddition(x, y) << "\n";
    std::cout << myAddition(x, y, z);

    return 0;
}