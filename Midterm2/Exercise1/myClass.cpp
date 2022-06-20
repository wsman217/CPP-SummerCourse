#include "myClass.h"

static int constructorCount = 0, destructorCount = 0;

myClass::myClass() {
    std::cout << "New instance: " << ++constructorCount << "\n";
}

myClass::~myClass() {
    std::cout << "Destroying instance: " << ++destructorCount << "\n";
}

void myClass::setFullName(std::string name) {
    fullName = name;
}

void myClass::setID(int id) {
    this->id = id;
}

std::string myClass::getFullName() {
    return fullName;
}

int myClass::getID() {
    return id;
}