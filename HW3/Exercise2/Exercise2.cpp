#include <iostream>
#include "vector"

#define testFunction(x, y) (x == y ? std::cout << "Equal\n" : std::cout << "Unequal\n")

int main() {
    std::vector<std::string> vec;
    std::vector<std::string> vec2;

    for (int i = 0; i < 3; i++) {
        std::string name;
        std::cout << "Enter a first name: ";
        std::cin >> name;
        vec.push_back(name);
        std::cout << "Enter a first name: ";
        std::cin >> name;
        vec2.push_back(name);
    }

    for (int i = 0; i < 3; i++) {
        testFunction(vec[i], vec2[i]);
    }

    return 0;
}