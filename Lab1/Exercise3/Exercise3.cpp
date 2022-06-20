
#include <iostream>

using namespace std;

namespace first {
    int val = 500;
}

int val = 100;

int main() {
    int val = 200;

    cout << first::val << "\n" << val;

    return 0;
}