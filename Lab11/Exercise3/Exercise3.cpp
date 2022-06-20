#include <iostream>
#include "Book.cpp"

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
    Book *book = new Book;

    std::cout << "Enter title: ";
    std::string title;
    getline(std::cin, title);

    std::cout << "Enter ISBN: ";
    unsigned int ISBN;
    std::cin >> ISBN;

    std::cout << "Enter price: ";
    double price;
    std::cin >> price;

    book->setTitle(title).setISBN(ISBN).setPrice(price);

    std::cout << "Title: " << book->getTitle();
    std::cout << "\nISBN: " << book->getIsbn();
    std::cout << "\nPrice: " << book-> getPrice();
    return 0;
}