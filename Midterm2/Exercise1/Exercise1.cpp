#include <iostream>
#include "myClass.cpp"

#define SIZE 3

int main() {
    myClass* arr[SIZE] = {new myClass(),
                          new myClass(),
                          new myClass()};

    for (auto i : arr) {
        std::cout << "Enter full name: ";
        std::string fullName;
        getline(std::cin, fullName);

        std::cout << "Enter id: ";
        int id;
        std::cin >> id;

        i->setFullName(fullName);
        i->setID(id);
        std::cin.ignore();
    }

    for (auto i : arr) {
        std::cout << "\nFull name: " << i->getFullName();
        std::cout << "\nID: " << i->getID();
    }
    return 0;
}