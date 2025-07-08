//
// Created by HP on 08/07/2025.
//
#include "EBook.h"
#include "../../Services/MailService.h"
#include <stdexcept>
#include <iostream>
EBook::EBook(const string& isbn,
             const string& title,
             int year,
             double price,
             const string& fileType)
        : Book(isbn, title, year, price), fileType(fileType) {}

bool EBook::isAvailable() const {
    return true; // Always available cuz it's an EBook
}

string EBook::getType() const {
    return "EBook";
}

void EBook::buy(int quantity,
                const string& email,
                const string& address) {
    if (quantity <= 0) {
        throw invalid_argument("Quantum book store - Quantity must be greater than 0.");
    }

    double totalCost = quantity * price;

    cout << "Quantum book store - Purchase successful.\n";
    cout << "  Type    : EBook\n";
    cout << "  ISBN    : " << isbn << "\n";
    cout << "  Quantity: " << quantity << "\n";
    cout << "  Total   : $" << totalCost << "\n";

    MailService::sendTo(email, title, fileType);
}

void EBook::printDetails() const {
    Book::printDetails();
    cout << "  Type     : EBook\n";
    cout << "  FileType : " << fileType << "\n";
}
