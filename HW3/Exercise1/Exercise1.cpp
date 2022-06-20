#include <iostream>
#include "vector"

std::vector<int> myFunction(std::vector<int> vec, int initialSize, int expanded) {
    for (int i = 0; i < expanded - initialSize; i++) {
        int num;
        std::cout << "Enter a number: ";
        std::cin >> num;
        vec.push_back(num);
    }
    return vec;
}

int main() {
    std::vector<int>  vec;

    for (int i = 0; i < 3; i++) {
        int num;

        std::cout << "Enter a number: ";
        std::cin >> num;

        vec.push_back(num);
    }

    char answer;
    std::cout << "Continue? (y/n): ";
    std::cin >> answer;

    if (answer == 'y' || answer == 'Y') {
        int newSize;
        std::cout << "Enter new size: ";
        std::cin >> newSize;
        vec = myFunction(vec, vec.size(), newSize);
    }

    for (auto i : vec) {
        std::cout << i << " ";
    }
    return 0;
}