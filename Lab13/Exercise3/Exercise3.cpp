#include <iostream>
#include "../Book.cpp"

void printAllVars(Book *book) {
    std::cout << "Title: " << book->title;
    std::cout << "\nISBN: " << book->ISBN;
    std::cout << "\nPrice: " << book->price;
}

int main() {
    Book *book = new Book("Harry Potter", 0);
    printAllVars(book);
    return 0;
}