#include <iostream>

double myAddition(double x, double y) {    return x + y;    }

double mySubtraction(double x, double y) {    return x - y;    }

double myMultiplication(double x, double y) {    return x * y;    }

double myDivision(double x, double y) {    return x / y;    }

int main() {
    double x, y;
    std::cout << "Enter number 1: ";
    std::cin >> x;
    std::cout << "Enter number 2: ";
    std::cin >> y;
    char op;
    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;
    bool keepRunning = true;
    while (keepRunning) {
        switch (op) {
            case '+':
                std::cout << myAddition(x, y);
                keepRunning = false;
                break;
            case '-':
                std::cout << mySubtraction(x, y);
                keepRunning = false;
                break;
            case '*':
                std::cout << myMultiplication(x, y);
                keepRunning = false;
                break;
            case '/':
                std::cout << myDivision(x, y);
                keepRunning = false;
                break;
            default:
                std::cout << "Invalid Entry\n";
                std::cout << "Enter operator (+, -, *, /): ";
                std::cin >> op;
                break;
        }
    }
}