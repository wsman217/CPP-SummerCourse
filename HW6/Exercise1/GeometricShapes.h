#ifndef HW6_GEOMETRICSHAPES_H
#define HW6_GEOMETRICSHAPES_H

#include <cmath>

class GeometricShapes {
private:
    double width, height, radius;
public:
    GeometricShapes() {
        width = 0;
        height = 0;
        radius = 0;
        std::cout << "New geometric shape.\n";
    }

    GeometricShapes* setWidth(double Width) {
        GeometricShapes::width = Width;
        return this;
    }

    GeometricShapes* setHeight(double Height) {
        GeometricShapes::height = Height;
        return this;
    }

    GeometricShapes* setRadius(double Radius) {
        GeometricShapes::radius = Radius;
        return this;
    }

    double getSquareArea() {
        return width * height;
    }

    double getRectangleArea() {
        return getSquareArea();
    }

    double getTriangleArea() {
        return .5 * getRectangleArea();
    }

    double getCircleArea() {
        return M_PI * radius * radius;
    }

    double getCircleCircumference() {
        return 2 * M_PI * radius;
    }

    ~GeometricShapes() {
        std::cout << "Destroyed shape.";
    }
};


#endif //HW6_GEOMETRICSHAPES_H
