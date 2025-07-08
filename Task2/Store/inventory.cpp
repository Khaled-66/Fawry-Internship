//
// Created by HP on 08/07/2025.
//

#include "Inventory.h"
#include <iostream>
#include <chrono>
#include <stdexcept>

void Inventory::addBook(const shared_ptr<Book>& book) {
    books[book->getISBN()] = book;
}

void Inventory::removeOutdatedBooks(int maxAge) {
    // Get current year
    auto now = chrono::system_clock::now();
    time_t now_time = chrono::system_clock::to_time_t(now);
    int currentYear = std::localtime(&now_time)->tm_year + 1900;

    for (auto it = books.begin(); it != books.end(); ) {
        if (currentYear - it->second->getYear() > maxAge) {
            cout << "Quantum book store - Removing outdated book: " << it->second->getTitle() << endl;
            it = books.erase(it);
        } else {
            ++it;
        }
    }
}

double Inventory::buyBookByISBN(const string& isbn,
                                int quantity,
                                const string& email,
                                const string& address) {
    auto it = books.find(isbn);
    if (it == books.end()) {
        throw runtime_error("Quantum book store - Book with ISBN '" + isbn + "' not found.");
    }

    shared_ptr<Book> book = it->second;
    book->buy(quantity, email, address);

    return quantity * book->getPrice();
}

void Inventory::printInventory() const {
    for (const auto& pair : books) {
        pair.second->printDetails();
        cout << "-----------------------------\n";
    }
}