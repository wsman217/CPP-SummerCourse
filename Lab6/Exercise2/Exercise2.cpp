#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {10, 20, 30, 40};

    for (auto i : vec) {
        std::cout << i << " ";
    }
    std::cout << "\n";
    int counter = 1;
    for (auto &i : vec) {
        i = counter++;
    }

    for (auto i : vec) {
        std::cout << i << " ";
    }
    return 0;
}