#include <utility>

class Books {
private:
    std::string title;
    int ISBN[2];

public:
    Books() {
        title = "NULL TITLE";
        for (int i : ISBN)
            i = -1;
    }

    Books(std::string Title) : Books() {
        this->title = std::move(Title);
    }

    Books(std::string Title, int isbn[]) : Books(std::move(Title)) {
        this->ISBN[0] = isbn[0];
        this->ISBN[1] = isbn[1];
    }

    std::string getTitle() {
        return title;
    }

    int* getISBN() {
        return ISBN;
    }
};