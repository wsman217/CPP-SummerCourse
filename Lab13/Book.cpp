#include <string>
#include <utility>
#include "float.h"

class Book {
private:
    std::string title;
    unsigned int ISBN;
    double price;

    void printAllVars();

public:
    inline friend void printAllVars(Book *book);

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

    explicit Book(std::string title) : Book() {
        this->title = std::move(title);
    }

    Book(std::string title, unsigned int ISBN) : Book(std::move(title)) {
        this->ISBN = ISBN;
    }

    Book(std::string title, unsigned int ISBN, double price) : Book(std::move(title), ISBN) {
        this->price = price;
    }

    ~Book() {
        std::cout << "Destructor\n";
    }
};