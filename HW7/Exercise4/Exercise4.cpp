#include <iostream>

class HW {
private:
    double HWgrades;
public:
    HW() {
        std::cout << "Default constructor called\n";
    }

    HW(double HWgrades) {
        std::cout << "Parameterized constructor called\n";
        this->HWgrades = HWgrades;
    }

    HW operator+(HW hw1) const {
        HW temp(this->HWgrades + hw1.HWgrades);
        return temp;
    }

    double getHWgrades() const {
        return HWgrades;
    }
};

int main() {
    HW hw1(83.4), hw2(79.2),
    hw3(91.3), hw4(88.9), result;

    result = (hw1 + hw2 + hw3 + hw4);

    double average = result.getHWgrades() / 4;
    std::cout << "The average HW grade is: " << average << std::endl;

    return 0;
}