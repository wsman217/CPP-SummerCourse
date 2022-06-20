#include <utility>

class Palindrome {
private:
    std::string word;
public:
    void setWord(std::string Word) {
        word = std::move(Word);
    }

    char getChar(int index) {
        return word[index];
    }

    bool isPalindrome() {
        int length = word.length();

        for (int i = 0; i < length / 2.0; i++) {
            if (getChar(i) != getChar(length - i - 1))
                return false;
        }
        return true;
    }
};