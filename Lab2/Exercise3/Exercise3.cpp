#include <iostream>

#define Z 3
#define X 2
#define Y 2

int main() {
    int array[Z][X][Y];

    for (auto &i: array)
        for (auto &j: i)
            for (int &k: j) {
                int number;
                std::cout << "Enter a number between 0 and 255: ";
                std::cin >> number;

                while (number < 0 || number > 255) {
                    std::cout << "Number was not between 0 and 255 try again: ";
                    std::cin >> number;
                }
                k = number;
            }

    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            int sum = 0;
            for (auto k : array) {
                sum += k[i][j];
            }
            std::cout << (sum / (double) Z) << "\t";
        }
        std::cout << "\n";
    }
}