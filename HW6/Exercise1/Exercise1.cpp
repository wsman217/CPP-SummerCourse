#include <iostream>
#include "GeometricShapes.h"

int main() {
    GeometricShapes *shape = new GeometricShapes();

    std::cout << "Enter Width: ";
    double width;
    std::cin >> width;

    std::cout << "Enter Height: ";
    double height;
    std::cin >> height;

    std::cout << "Enter Radius: ";
    double radius;
    std::cin >> radius;

    shape->setWidth(width)->setHeight(height)->setRadius(radius);

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