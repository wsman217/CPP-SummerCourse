#include <iostream>
#include <math.h>

double cosSin(int input, double& cosOutput) {
    cosOutput = cos(input);
    return sin(input);
}

int main() {

    double cosOutput;
    double sinOutput = cosSin(5, cosOutput);

    std::cout << "Cos: " << cosOutput << "\nSin: " << sinOutput << std::endl;
    return 0;
}