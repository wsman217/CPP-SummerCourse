#include <iostream>

class B;

class A {
private:
    int value;

public:
    A(int val) {
        this->value = val;
    }

    friend int sum(A a, B b);
};

class B {
private:
    int value;

public:
    B(int val) {
        this->value = val;
    }

    friend class A;

    friend int sum(A a, B b);
};

int sum(A a, B b) {
    return a.value + b.value;
}

int main() {
    A a(10);
    B b(20);

    std::cout << "Sum: " << sum(a, b) << std::endl;

    return 0;
}