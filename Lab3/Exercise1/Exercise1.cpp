#include <iostream>
#include <fstream>

int main() {

    std::ifstream file;
    file.open("exercise1.txt");

    int array[10] = {};

    if (!file.is_open())
        return 0;

    while (!file.eof()) {
        int num;
        file >> num;
        array[num]++;
    }

    file.close();

    for (int i = 0; i < 10; i++) {
        std::cout << i << "|";
        for (int j = 0; j < array[i]; j++)
            std::cout << "* ";
        std::cout << "\n";
    }
}