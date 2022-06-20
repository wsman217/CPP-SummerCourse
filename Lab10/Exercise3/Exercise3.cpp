#include <iostream>
#include "cmath"

class Points {
private:
    int x, y;

public:
    void setCoords(int X, int Y) {
        x = X;
        y = Y;
    }

    int getX() {
        return x;
    }

    int getY() {
        return y;
    }
};

void points(Points &point, std::string place) {
    std::cout << "Enter " << place << " x: ";
    int x;
    std::cin >> x;
    std::cout << "Enter " << place << " y: ";
    int y;
    std::cin >> y;
    point.setCoords(x, y);
}

int main() {
    Points p1, p2;

    points(p1, "first");
    points(p2, "second");

    std::cout << "Distance: " << (sqrt(
            (p2.getX() - p1.getX()) * (p2.getX() - p1.getX())
            +  (p2.getY() - p1.getY()) * (p2.getY() - p1.getY())
            ));
    return 0;
}