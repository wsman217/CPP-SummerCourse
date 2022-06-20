#include <iostream>

class Rectangle {
private:
    int width, length;

public:
    int getWidth() {
        return this->width;
    }

    int getLength() {
        return this->length;
    }

    int getArea() {
        return this->length * this->width;
    }

    Rectangle* setWidth(int width) {
        this->width = width;
        return this;
    }

    Rectangle* setLength(int length) {
        this->length = length;
        return this;
    }
};

int main() {
    Rectangle rectangle, *ptr = &rectangle;

    int width, length;

    std::cout << "Enter width: ";
    std::cin >> width;
    std::cout << "Enter length: ";
    std::cin >> length;

    ptr->setWidth(width)->setLength(length);

    std::cout << "Width: " << ptr->getWidth();
    std::cout << "\nLength: " << ptr->getLength();
    std::cout << "\nArea: " << ptr->getArea();
    return 0;
}