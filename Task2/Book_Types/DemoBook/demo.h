//
// Created by HP on 08/07/2025.
//

#ifndef FAWRYTASK_DEMO_H
#define FAWRYTASK_DEMO_H

#include "../../Book/Book.h"

class DemoBook : public Book {
public:
    DemoBook(const string& isbn,
             const string& title,
             int year,
             double price);

    void buy(int quantity,
             const string& email,
             const string& address) override;

    bool isAvailable() const override;
    string getType() const override;

    void printDetails() const override;
};


#endif //FAWRYTASK_DEMO_H
