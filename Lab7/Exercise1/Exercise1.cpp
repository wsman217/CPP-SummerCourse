#include <iostream>
#include "vector"

void myFunction(std::vector<int> vec) {
    vec[0] = 1;
    vec.push_back(60);
}

int main() {
    std::vector<int> vec = {10, 20, 30, 40, 50};

    for (auto i : vec) {
        std::cout << i << " ";
    }
    std::cout << "\n";
    myFunction(vec);

    for (auto i : vec) {
        std::cout << i << " ";
    }
    return 0;
}