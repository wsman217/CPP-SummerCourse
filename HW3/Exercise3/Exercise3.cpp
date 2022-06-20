#include <iostream>

int main() {
    std::string input;
    std::cout << "Enter your word or phrase: ";
    getline(std::cin, input);

    char *inputPtr = &input[0];

    int spaces = 1;

    for (int i = 0; i < input.size(); i++) {
        if (*inputPtr == ' ')
            spaces++;
        inputPtr++;
    }

    std::cout << "Number of words in phrase: " << spaces;

    return 0;
}