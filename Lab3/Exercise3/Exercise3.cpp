#include <iostream>
#include <fstream>

//I don't fully understand what you mean by use a for loop to get the full name?
int main() {

    std::ofstream file;
    file.open("info.txt", std::ios_base::app);

    std::string name;
    std::cout << "Enter your full name: ";
    getline(std::cin, name);

    std::string id;
    std::cout << "Enter your ID: ";
    std::cin >> id;

    int grade;
    std::cout << "Enter your grade: ";
    std::cin >> grade;

    file << name << "\t" << id << "\t" << grade << "\n";
}