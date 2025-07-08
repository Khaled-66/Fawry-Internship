//
// Created by HP on 08/07/2025.
//

#include "PaperBook.h"
#include "../../Services/ShippingService.h"
#include <stdexcept>
#include <iostream>
PaperBook::PaperBook(const string& isbn,
                     const string& title,
                     int year,
                     double price,
                     int stock)
        : Book(isbn, title, year, price), stock(stock) {}

bool PaperBook::isAvailable() const {
    return stock > 0;
}

string PaperBook::getType() const {
    return "PaperBook";
}

void PaperBook::buy(int quantity,
                    const string& email,
                    const string& address) {
    if (quantity <= 0) {
        throw invalid_argument("Quantum book store - Quantity must be greater than 0.");
    }
    if (quantity > stock) {
        throw runtime_error("Quantum book store - Not enough stock available.");
    }

    stock -= quantity;

    double totalCost = quantity * price;

    cout<< "Quantum book store - Purchase successful.\n";
    cout<< "  Type    : PaperBook\n";
    cout<< "  ISBN    : " << isbn << "\n";
    cout<< "  Quantity: " << quantity << "\n";
    cout<< "  Total   : $" << totalCost << "\n";

    ShippingService::shipTo(address, title);
}

void PaperBook::printDetails() const {
    Book::printDetails();
    cout << "  Type    : PaperBook\n";
    cout << "  Stock   : " << stock << "\n";
}

