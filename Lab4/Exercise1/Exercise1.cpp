#include <iostream>

static int val = 0;

void demo() {
    std::cout << val++;
}

int main() {
    for (int i = 0; i < 5; i++)
        demo();
    return 0;
}