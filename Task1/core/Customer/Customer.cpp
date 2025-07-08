#include "Customer.h"
#include <iostream>
#include <stdexcept>
#include <iomanip>

Customer::Customer(std::string name, double balance) : name(name), balance(balance) {}

void Customer::addToCart(Product* product, int quantity) {
    if (quantity > product->getQuantity()) {
        throw std::runtime_error("Insufficient stock.");
    }
    cart[product] += quantity;
}

void Customer::checkout() {
    if (cart.empty()) throw std::runtime_error("Cart is empty.");

    double subtotal = 0;
    std::vector<IShippable*> itemsToShip;

    for (const auto& [product, qty] : cart) {
        if (product->isExpired()) throw std::runtime_error(product->getName() + " is expired.");
        if (qty > product->getQuantity()) throw std::runtime_error(product->getName() + " is out of stock.");
        subtotal += product->getPrice() * qty;

        if (product->requiresShipping()) {
            IShippable* shippableItem = dynamic_cast<IShippable*>(product);
            if (shippableItem) {
                for (int i = 0; i < qty; ++i) {
                    itemsToShip.push_back(shippableItem);
                }
            }
        }
    }

    double shippingFees = itemsToShip.empty() ? 0 : ShippingService::shipItems(itemsToShip);
    double total = subtotal + shippingFees;
    if (total > balance) throw std::runtime_error("Insufficient balance.");
    balance -= total;

    // Update product stock
    for (const auto& [product, qty] : cart) {
        product->reduceQuantity(qty);
    }

    const int width = 98;
    const int tableWidth = 82;
    const int leftPadding = (width - tableWidth - 2) / 2;

    std::cout << "+" << std::string(width - 2, '=') << "+\n";
    std::cout << "| " << std::setw((width - 4) / 2) << std::left << "RECEIPT"
              << std::setw((width - 4) / 2) << " " << "|\n";
    std::cout << "+" << std::string(width - 2, '=') << "+\n";
    std::cout << "| Customer: " << name
              << std::setw(width - 13 - name.length()) << " " << "|\n";
    std::cout << "+" << std::string(width - 2, '-') << "+\n";

    // Table Header
    std::cout << "| " << std::string(leftPadding, ' ')
              << std::left << std::setw(20) << "Item"
              << "| " << std::setw(5)  << "Qty"
              << "| " << std::setw(12) << "Price (L.E)"
              << "| " << std::setw(12) << "Total (L.E)"
              << "| " << std::setw(12) << "Weight (kg)"
              << "| " << std::setw(15) << "Shipping (L.E)"
              << " |\n";
    std::cout << "+" << std::string(width - 2, '-') << "+\n";

    // Items Loop
    for (const auto& [product, qty] : cart) {
        double itemTotal = product->getPrice() * qty;
        double shippingFee = 0;
        std::string weightStr = "-";

        if (product->requiresShipping()) {
            IShippable* shippableItem = dynamic_cast<IShippable*>(product);
            if (shippableItem) {
                weightStr = std::to_string(shippableItem->getWeight());
                shippingFee = ShippingService::calculateItemShipping(shippableItem->getWeight()) * qty;
            }
        }

        std::cout << "| " << std::string(leftPadding, ' ')
                  << std::left << std::setw(20) << product->getName()
                  << "| " << std::setw(5)  << qty
                  << "| " << std::setw(12) << std::fixed << std::setprecision(2) << product->getPrice()
                  << "| " << std::setw(12) << itemTotal
                  << "| " << std::setw(12) << weightStr
                  << "| " << std::setw(15) << shippingFee
                  << " |\n";
    }
    std::cout << "+" << std::string(width - 2, '-') << "+\n";
    const int blockWidth = 52;
    const int blockLeftPad = (width - blockWidth - 2) / 2;

    std::cout << "| " << std::string(blockLeftPad, ' ')
              << std::left << std::setw(25) << "Subtotal:"
              << std::right << std::setw(10) << subtotal << " EGP"
              << std::string(width - 2 - blockLeftPad - 25 - 10 - 6, ' ')
              << "|\n";

    std::cout << "| " << std::string(blockLeftPad, ' ')
              << std::left << std::setw(25) << "Shipping Fees:"
              << std::right << std::setw(10) << shippingFees << " EGP"
              << std::string(width - 2 - blockLeftPad - 25 - 10 - 6, ' ')
              << "|\n";

    std::cout << "| " << std::string(blockLeftPad, ' ')
              << std::left << std::setw(25) << "Total Paid:"
              << std::right << std::setw(10) << total << " EGP"
              << std::string(width - 2 - blockLeftPad - 25 - 10 - 6, ' ')
              << "|\n";

    std::cout << "| " << std::string(blockLeftPad, ' ')
              << std::left << std::setw(25) << "Remaining Balance:"
              << std::right << std::setw(10) << balance << " EGP"
              << std::string(width - 2 - blockLeftPad - 25 - 10 - 6, ' ')
              << "|\n";

    std::cout << "+" << std::string(width - 2, '=') << "+\n";

    cart.clear();
}

double Customer::getBalance() const {
    return balance;
}
