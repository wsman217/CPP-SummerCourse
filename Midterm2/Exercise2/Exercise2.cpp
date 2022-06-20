#include <iostream>
#include "Books.cpp"

int main() {
    Books *arr[] = {new Books(),
                    new Books("Harry potter"),
                    new Books("Percy Jackson",
                              new int[2]{0, 1})};

     for (auto i : arr) {
         std::cout << "Title: " << i->getTitle();
         std::cout << "\nISBN 1: " << i->getISBN()[0];
         std::cout << "\nISBN 2: " << i->getISBN()[1] << "\n";
     }
    return 0;
}