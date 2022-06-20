#include <iostream>

int summation(int *one, int &two) {
    return *one * 10 + two * 10;
}

int main() {
    int one = 10;
    int two = 20;

    std::cout << summation(&one, two);

    return 0;
}