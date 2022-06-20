#include <iostream>
#include <utility>

class Student {
private:
    int ID;
    std::string name;

public:
    int getId() const {
        return ID;
    }

    Student* setId(int id) {
        ID = id;
        return this;
    }

    std::string getName() const {
        return name;
    }

    Student* setName(std::string Name) {
        Student::name = std::move(Name);
        return this;
    }
};

int main() {
    Student *arr[] = {new Student,
                      new Student,
                      new Student};

    for (auto i : arr) {
        std::cout << "Enter id: ";
        int id;
        std::cin >> id;

        std::cout << "Enter Student Name: ";
        std::string name;
        std::cin.ignore();
        getline(std::cin, name);

        i->setId(id)->setName(name);
    }

    for (auto i : arr) {
        std::cout   << "ID: " << i->getId()
                    << "\nName: " << i->getName() << "\n";
    }
    return 0;
}