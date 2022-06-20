#include <iostream>

// 0 0 100 300

int sum(int first, int second, int third = 100, int fourth = 300) {
    return first + second + third + fourth;
}

int main() {

    std::cout << sum(10, 15) << std::endl;
    std::cout << sum(10, 15, 25) << std::endl;
    std::cout << sum(10, 15, 25, 30) << std::endl;
    return 0;
}