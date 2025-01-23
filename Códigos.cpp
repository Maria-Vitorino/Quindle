#include <iostream>
#include <vector>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    double price;
    bool isRented;

public:
    Book(std::string t, std::string a, double p)
        : title(t), author(a), price(p), isRented(false) {}

    std::string getTitle() const { return title; }
    std::string getAuthor() const { return author; }
    double getPrice() const { return price; }
    bool getIsRented() const { return isRented; }

    void rentBook() { isRented = true; }
    void returnBook() { isRented = false; }
};
