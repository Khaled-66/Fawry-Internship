//
// Created by HP on 08/07/2025.
//

#ifndef FAWRYTASK_INVENTORY_H
#define FAWRYTASK_INVENTORY_H

#include <unordered_map>
#include <memory>
#include <string>
#include "../Book/Book.h"

class Inventory {
private:
    unordered_map<string, shared_ptr<Book>> books;

public:
    void addBook(const shared_ptr<Book>& book);
    void removeOutdatedBooks(int maxAge);
    double buyBookByISBN(const string& isbn,
                         int quantity,
                         const string& email,
                         const string& address);
    void printInventory() const;
};



#endif //FAWRYTASK_INVENTORY_H
