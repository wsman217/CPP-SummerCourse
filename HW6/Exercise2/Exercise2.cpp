#include <iostream>
#include "GeometricShapes.h"

int main() {
    std::cout << "Enter Width: ";
    double width;
    std::cin >> width;

    GeometricShapes *shape = new GeometricShapes(width);

    std::cout   << "\nSquare Area: " <<
                    shape->getSquareArea()
                << "\nRectangle Area: " <<
                    shape->getRectangleArea()
                << "\nTriangle Area: " <<
                    shape->getTriangleArea()
                << "\nCircle Area: " <<
                    shape->getCircleArea()
                << "\nCircle Circumference: " <<
                    shape->getCircleCircumference();

    return 0;
}