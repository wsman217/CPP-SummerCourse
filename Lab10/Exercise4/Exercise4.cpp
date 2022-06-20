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

void points(Points *point, std::string place) {
    std::cout << "Enter " << place << " x: ";
    int x;
    std::cin >> x;
    std::cout << "Enter " << place << " y: ";
    int y;
    std::cin >> y;
    point->setCoords(x, y);
}

int main() {
    Points p1, p2, *ptr1 = &p1, *ptr2 = &p2;

    points(ptr1, "first");
    points(ptr2, "second");

    std::cout << "Distance: " << (sqrt(
            (ptr2->getX() - ptr1->getX()) * (ptr2->getX() - ptr1->getX())
            + (ptr2->getY() - ptr1->getY()) * (ptr2->getY() - ptr1->getY())
    ));
    return 0;
}