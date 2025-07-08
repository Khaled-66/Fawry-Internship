#include "Book.h"
#include <iostream>
using namespace std;
Book::Book(const string& isbn,
           const string& title,
           int year,
           double price)
        : isbn(isbn), title(title), year(year), price(price) {}

string Book::getISBN() const {
    return isbn;
}

string Book::getTitle() const {
    return title;
}

int Book::getYear() const {
    return year;
}

double Book::getPrice() const {
    return price;
}

void Book::printDetails() const {
    cout << "Quantum book store - Book Details:\n";
    cout << "  ISBN   : " << isbn << "\n";
    cout << "  Title  : " << title << "\n";
    cout << "  Year   : " << year << "\n";
    cout << "  Price  : $" << price << "\n";
}