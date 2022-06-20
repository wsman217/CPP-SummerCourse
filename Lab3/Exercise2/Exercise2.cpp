#include <iostream>
#include <fstream>

int main() {
    std::ifstream file;
    file.open("exercise1.txt");

    if (!file.is_open())
        return 0;

    while (!file.eof()) {
        int num;
        file >> num;
        std::cout << num << "\n";
    }
}