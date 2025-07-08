//
// Created by HP on 08/07/2025.
//

#include "QuantumBookstoreFullTest.h"
#include "../Store/Inventory.h"
#include "../Book_Types/PaperBook/PaperBook.h"
#include "../Book_Types/EBook/EBook.h"
#include "../Book_Types/DemoBook/demo.h"
#include <iostream>
using namespace std;
#include <memory>

void QuantumBookstoreFullTest::runAllTests() {
    std::cout << "\nQuantum book store - Running Tests...\n\n";

    Inventory inventory;

    // Add Books
    auto book1 = make_shared<PaperBook>("422122", "DL",  2010, 50.0, 10);
    auto book2 = make_shared<EBook>("22223442", "Python ML",  2015, 35.0, "PDF");
    auto book3 = make_shared<DemoBook>("332333", "MLP",  2005, 0.0);

    inventory.addBook(book1);
    inventory.addBook(book2);
    inventory.addBook(book3);

    cout << "\nQuantum book store - Initial Inventory:\n";
    inventory.printInventory();

    // Buy EBook
    try {
        cout << "\nQuantum book store - Buying EBook:\n";
        double cost = inventory.buyBookByISBN("2222", 1, "user@example.com", "");
        cout << "Quantum book store - Paid: $" << cost << "\n";
    } catch (const std::exception& e) {
            cerr << e.what() << "\n";
    }

    // Buy PaperBook
    try {
        cout << "\nQuantum book store - Buying PaperBook:\n";
        double cost = inventory.buyBookByISBN("1111", 2, "user@example.com", "123 Street");
        cout << "Quantum book store - Paid: $" << cost << "\n";
    } catch (const std::exception& e) {
        cerr << e.what() << "\n";
    }

    // Try to buy DemoBook (should fail)
    try {
        cout << "\nQuantum book store - Trying to Buy DemoBook:\n";
        inventory.buyBookByISBN("3333", 1, "user@example.com", "");
    } catch (const std::exception& e) {
        cerr << e.what() << "\n";
    }

    // Remove outdated books older than 15 years
    cout << "\nQuantum book store - Removing books older than 15 years:\n";
    inventory.removeOutdatedBooks(15);

    cout << "\nQuantum book store - Final Inventory:\n";
    inventory.printInventory();
}
