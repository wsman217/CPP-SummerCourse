#include <string>
#include <utility>
#include "float.h"

class Book {
private:
    std::string title;
    unsigned int ISBN;
    double price;

public:
    Book& setTitle(std::string Title);

    Book& setISBN(unsigned int isbn);

    Book& setPrice(double Price);

    const std::string &getTitle() const {
        return title;
    }

    unsigned int getIsbn() const {
        return ISBN;
    }

    double getPrice() const {
        return price;
    }

    Book() {
        std::cout << "Constructor\n";
        title = "NULL TITLE";
        ISBN = -1;
        price = DBL_MAX;
    }

    explicit Book(std::string Title) {
        std::cout << "Constructor\n";
        title = std::move(Title);
        ISBN = -1;
        price = DBL_MAX;
    }

    Book(std::string Title, unsigned int isbn) {
        std::cout << "Constructor\n";
        title = std::move(Title);
        ISBN = isbn;
        price = DBL_MAX;
    }

    Book(std::string Title, unsigned int isbn, double Price) {
        std::cout << "Constructor\n";
        title = std::move(Title);
        ISBN = isbn;
        price = Price;
    }

    ~Book() {
        std::cout << "Destructor\n";
    }
};