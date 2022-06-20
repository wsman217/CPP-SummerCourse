#include <iostream>
#include "algorithm"

struct Student {
    int id;
    double gpa;
    std::string major;
};

bool comparisonID(Student s1, Student s2) {
    return s1.id < s2.id;
}

bool comparisonGPA(Student s1, Student s2) {
    return s1.gpa < s2.gpa;
}

bool comparisonMaj(Student s1, Student s2) {
    return s1.major.compare(s2.major) < 0;
}

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

    Student *ptr = new Student[SIZE];

    int counter = 0;
    for (auto &i: St) {
        if ((i.gpa <= toLookForGPA || i.major != toLookForMajor) && !ignore)
            continue;
        *ptr = i;
        ptr++;
        counter++;
    }

    ptr -= counter;

    int choice;

    std::cout << "Enter a choice 1-3: ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::sort(ptr, (ptr + counter), comparisonID);
            break;
        case 2:
            std::sort(ptr, (ptr + counter), comparisonGPA);
            break;
        case 3:
            std::sort(ptr, (ptr + counter), comparisonMaj);
            break;
        default:
            std::cout << "Impossible choice.";
    }

    for (int i = 0; i < counter; i++) {
        std::cout << "ID: " << ptr->id << " GPA: " << ptr->gpa << " Major: " << ptr->major << "\n";
        ptr++;
    }
    return 0;
}