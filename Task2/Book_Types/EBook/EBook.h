//
// Created by HP on 08/07/2025.
//

#ifndef FAWRYTASK_EBOOK_H
#define FAWRYTASK_EBOOK_H

#include "../../Book/Book.h"

class EBook : public Book {
private:
    string fileType;

public:
    EBook(const string& isbn,
          const string& title,
          int year,
          double price,
          const string& fileType);

    void buy(int quantity,
             const string& email,
             const string& address) override;

    bool isAvailable() const override;
    string getType() const override;

    void printDetails() const override;
};


#endif //FAWRYTASK_EBOOK_H
