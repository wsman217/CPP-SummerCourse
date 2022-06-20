#include <string>

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
};