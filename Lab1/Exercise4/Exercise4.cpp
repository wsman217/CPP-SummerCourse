#include <iostream>

int main() {
    int startingNumber;
    std::cout << "Enter the starting number: ";
    std:: cin >> startingNumber;

    for (int i = startingNumber; i < startingNumber + 10; i++) {
        if (i == startingNumber + 4)
            continue;
        std::cout << i << ":" << i * i << "\n";
    }
}