//
// Created by HP on 08/07/2025.
//

#include "demo.h"
#include <stdexcept>
#include <iostream>
DemoBook::DemoBook(const string& isbn,
                   const string& title,
                   int year,
                   double price)
        : Book(isbn, title, year, price) {}

bool DemoBook::isAvailable() const {
    return false;
}

string DemoBook::getType() const {
    return "DemoBook";
}

void DemoBook::buy(int quantity,
                   const string& email,
                   const string& address) {
    throw runtime_error("Quantum book store - Demo books are not for sale.");
}

void DemoBook::printDetails() const {
    Book::printDetails();
    std::cout << "  Type     : DemoBook (Not for sale)\n";
}