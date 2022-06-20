#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> names;

    for (int i = 0; i < 3; i++) {
        std::cout << "Enter name " << i << ": ";
        std::string name;
        std::cin >> name;
        names.push_back(name);
    }

    names.pop_back();
    names.push_back("Weston");
    std::cout << names.front() << " " << names.back() << "\n";

    std::vector<std::string> names2 = names;

    for (auto i : names2) {
        std::cout << i << " ";
    }
    return 0;
}