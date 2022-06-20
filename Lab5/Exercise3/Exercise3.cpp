#include <iostream>

//I don't understand how you are supposed to return these
//unless you want to use global variables, but I
//feel that defeats the purpose.
void swapValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;

    std::cout << x << " " << y << "\n";
}

void swapReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;

}

void swapPointer(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;

}

int main() {
    int x, y;

    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter y: ";
    std::cin >> y;

    swapValue(x, y);
    swapReference(x, y);
    std::cout << x << " " << y << "\n";
    swapPointer(&x, &y);
    std::cout << x << " " << y << "\n";

    return 0;
}