#include <iostream>
#include "../Book.cpp"

void Book::printAllVars() {
    std::cout << "Title: " << title;
    std::cout << "\nISBN: " << ISBN;
    std::cout << "\nPrice: " << price;
}

int main() {
    Book *book = new Book();
    //Does not work since it is a private function.
    book->printAllVars();
    return 0;
}