#include <iostream>
#include "vector"

std::vector<int> vec;

void add() {
    int toAdd;
    std::cout << "Enter a number to add: ";
    std::cin >> toAdd;
    std::cin.ignore();
    vec.push_back(toAdd);
}

void remove() {
    int index;
    std::cout << "Enter the index to remove: ";
    std::cin >> index;
    std::cin.ignore();
    vec.erase(vec.begin() + index);
}

int main() {

    while (true) {
        std::string input;
        std::cout << "Enter add or remove: ";
        getline(std::cin, input);

        if (input == "add")
            add();
        else if (input == "remove")
            remove();
        else if (input == "-999")
            break;
    }

    for (auto i : vec) {
        std::cout << i << " ";
    }

    return 0;
}