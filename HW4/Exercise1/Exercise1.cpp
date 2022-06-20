#include <iostream>

int main() {
    char sentence[100];
    std::cout << "Enter a sentence: ";
    std::cin.getline(sentence, 100);

    char *ptr = sentence;

    int whitespaceCounter = 0;
    int incrementCounter = 0;
    while (whitespaceCounter < 2) {
        if (*ptr == ' ') {
            whitespaceCounter++;
        }
        ptr++;
        incrementCounter++;
    }

    *ptr = '\0';
    ptr -= incrementCounter;

    while (*ptr != '\0') {
        if (*ptr <= 122 && *ptr >= 97)
            *ptr -= 32;
        ptr++;
    }

    std::cout << sentence;
    return 0;
}