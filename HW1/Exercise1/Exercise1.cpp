#include <iostream>
#include <fstream>

int main() {
    std::ofstream file;
    file.open("Exercise1.txt");

    for (int i = 0; i < 9; i++) {
        if (i % 3 == 0 && i != 0) {
            file << "\r\n";
        }
        std::cout << "Enter a number: ";
        int working;
        std::cin >> working;
        file << working << "\t";
    }
}