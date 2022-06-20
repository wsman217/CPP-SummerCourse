#include <iostream>
#include "../Book.cpp"

Book& Book::setTitle(std::string Title) {
    title = Title;
    return *this;
}

Book& Book::setISBN(unsigned int isbn) {
    ISBN = isbn;
    return *this;
}

Book& Book::setPrice(double Price) {
    price = Price;
    return *this;
}

int main() {

    Book *books[3] = {new Book,
                      new Book("Percy Jackson", 0),
                      new Book("Lord of the Rings", 0, 7.5)};

    for (Book *pBook : books) {
        std::cout << "Title: " << pBook->getTitle();
        std::cout << "\nISBN: " << pBook->getIsbn();
        std::cout << "\nPrice: " << pBook->getPrice() << "\n";

        delete pBook;
        pBook = nullptr;
    }
    return 0;
}