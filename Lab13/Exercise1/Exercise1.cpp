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
    Book *book = new Book("Harry Potter", 0);

    std::cout << "Title: " << book->getTitle();
    std::cout << "\nISBN: " << book->getIsbn();
    std::cout << "\nPrice: " << book-> getPrice();
    return 0;
}