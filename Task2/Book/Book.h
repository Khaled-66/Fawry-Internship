//
// Created by HP on 08/07/2025.
//

#ifndef FAWRYTASK_BOOK_H
#define FAWRYTASK_BOOK_H
#include <string>
using namespace std;
class Book {
protected:
    string isbn;
    string title;
    int year;
    double price;

public:
    Book(const string& isbn,
         const string& title,
         int year,
         double price);

    virtual ~Book() = default;

    // getters
    string getISBN() const;
    string getTitle() const;
    int getYear() const;
    double getPrice() const;

    // Pure virtual functions (must be implemented by derived classes)
    virtual void buy(int quantity,
                     const string& email,
                     const string& address) = 0;

    virtual bool isAvailable() const = 0;
    virtual string getType() const = 0;

    virtual void printDetails() const;
};


#endif //FAWRYTASK_BOOK_H
