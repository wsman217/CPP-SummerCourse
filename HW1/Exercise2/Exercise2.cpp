#include <iostream>
#include <fstream>

int main() {

    std::string fileName;
    std::cout << "Enter file name: ";
    std::cin >> fileName;

    std::ifstream file;
    file.open(fileName);

    int sum = 0;

    for (int i = 0; i < 9; i++) {
        int working;
        file >> working;
        sum += working;
    }

    std::cout << "Sum is: " << sum;
}