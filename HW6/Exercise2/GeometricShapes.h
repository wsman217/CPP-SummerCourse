#ifndef HW6_GEOMETRICSHAPES_H
#define HW6_GEOMETRICSHAPES_H

#include <cmath>

class GeometricShapes {
private:
    double width, height, radius;
public:
    GeometricShapes(double Width = 0, double Height = 0, double Radius = 0) {
        width = Width;
        height = Height;
        radius = Radius;
        std::cout << "New geometric shape.";
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
