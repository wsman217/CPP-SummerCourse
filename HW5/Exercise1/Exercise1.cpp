#include <iostream>

struct Student {
    int id;
    double gpa;
    std::string major;
};

int main() {
    const int SIZE = 10;
    Student St[SIZE] = {{10, 3.37, "Computer Science"},
                        {13, 3.41, "Electrical Engineering"},
                        {15, 2.39, "Biological Sciences"},
                        {11, 3.43, "Mechanical Engineering"},
                        {9,  1.93, "Computer Science"},
                        {8,  3.88, "Computer Science"},
                        {16, 3.30, "Biological Sciences"},
                        {12, 1.89, "Computer Science"},
                        {14, 2.24, "Mechanical Engineering"},
                        {7,  1.74, "Electrical Engineering"}};

    double toLookForGPA;
    std::string toLookForMajor;

    std::cout << "Enter a major to search for: ";
    getline(std::cin, toLookForMajor);
    std::cout << "Enter gpa to look for: ";
    std::cin >> toLookForGPA;

    bool ignore = false;
    if (toLookForMajor.empty())
        ignore = true;

    for (auto &i : St) {
        if ((i.gpa <= toLookForGPA || i.major != toLookForMajor) && !ignore)
            continue;
        std::cout << "ID: " << i.id << " GPA: " << i.gpa << " Major: " << i.major << "\n";
    }
    return 0;
}