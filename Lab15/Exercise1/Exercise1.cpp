#include <iostream>

class Test {
private:
    int count;

public:
    Test() {
        this->count = 0;
    }

    Test operator++() {
        count++;
        return *this;
    }

    void showIncrementedValue() {
        std::cout << "Incremented Value: " <<  count;
    }
};

int main() {
    Test t;
    ++t;
    t.showIncrementedValue();

    return 0;
}