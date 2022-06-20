#include <iostream>

class Rectangle2;

class Rectangle {
private:
    int width, length;

public:
    friend class Rectangle2;

    int getWidth() {
        return this->width;
    }

    int getLength() {
        return this->length;
    }

    int getArea() {
        return this->length * this->width;
    }

    void setWidth(int width) {
        this->width = width;
    }

    void setLength(int length) {
        this->length = length;
    }
};

class Rectangle2 {
public:
    void mutator(Rectangle &rectangle, int width, int length) {
        rectangle.length = length;
        rectangle.width = width;
    }
};

int main() {
    Rectangle rectangle;
    Rectangle2 rectangle2;

    int width, length;

    std::cout << "Enter width: ";
    std::cin >> width;
    std::cout << "Enter length: ";
    std::cin >> length;

    rectangle2.mutator(rectangle, width, length);

    std::cout << "Width: " << rectangle.getWidth();
    std::cout << "\nLength: " << rectangle.getLength();
    std::cout << "\nArea: " << rectangle.getArea();
    return 0;
}