//
// Created by HP on 08/07/2025.
//

#ifndef FAWRYTASK_PAPERBOOK_H
#define FAWRYTASK_PAPERBOOK_H


#include "../../Book/Book.h"

class PaperBook : public Book {
private:
    int stock;

public:
    PaperBook(const string& isbn,
              const string& title,
              int year,
              double price,
              int stock);

    void buy(int quantity,
             const string& email,
             const string& address) override;

    bool isAvailable() const override;
    string getType() const override;

    void printDetails() const override;
};


#endif //FAWRYTASK_PAPERBOOK_H
