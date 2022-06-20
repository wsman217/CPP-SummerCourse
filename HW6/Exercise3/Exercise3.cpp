#include <iostream>
#include "Palindrome.cpp"

int main() {
    std::cout << "Enter a word to see if it is a palindrome: ";
    std::string word;
    std::cin >> word;

    Palindrome *palindrome = new Palindrome;
    palindrome->setWord(word);

    std::cout << word << " is" <<
        (palindrome->isPalindrome() ? " a palindrome." : " not a palindrome.");

    return 0;
}