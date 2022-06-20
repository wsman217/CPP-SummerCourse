#include <iostream>

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    bool isEven = number % 2 == 0;
    //Sorry I just wanted to play with bitwise operators.
    /*Quick explanation for anyone looking Ints are 32 bits
    so shifting the int 31 to the left and then 31 to the right
    and then checking if its equal to 0 will tell you if its even
    or odd. Odd numbers in binary always end in a 1 and even numbers
    always end in 0.*/
    bool funWay = number << 31 >> 31 == 0;

    std::cout << (isEven ? "Even" : "Odd") << "\n";
    std::cout << (funWay ? "Even" : "Odd");
}