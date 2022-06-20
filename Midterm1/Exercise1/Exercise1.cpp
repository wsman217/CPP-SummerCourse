#include <iostream>
#include "vector"

#define SIZE 5

int main() {
    std::vector<int> vec(SIZE);

    for (auto &i : vec) {
        std::cout << "Enter a number: ";
        std::cin >> i;
    }

    std::vector<int> vec2(SIZE);
    vec2 = vec;

    vec2.pop_back();
    vec2.erase(vec2.begin() + 1);

    for (auto i : vec2) {
        std::cout << i << " ";
    }

    return 0;
}