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

    Book *books[3] = {new Book, new Book, new Book};

    for (Book *pBook : books) {
        std::cout << "Enter title: ";
        std::string title;
        getline(std::cin, title);

        std::cout << "Enter ISBN: ";
        unsigned int ISBN;
        std::cin >> ISBN;

        std::cout << "Enter price: ";
        double price;
        std::cin >> price;
        std::cin.ignore();

        pBook->setTitle(title).setISBN(ISBN).setPrice(price);
    }

    for (Book *pBook : books) {
        std::cout << "Title: " << pBook->getTitle();
        std::cout << "\nISBN: " << pBook->getIsbn();
        std::cout << "\nPrice: " << pBook->getPrice() << "\n";

        delete pBook;
        pBook = nullptr;
    }
    return 0;
}