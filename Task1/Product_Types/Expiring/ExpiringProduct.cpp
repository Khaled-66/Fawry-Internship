#include "ExpiringProduct.h"
#include <ctime>

ExpiringProduct::ExpiringProduct(std::string name, double price, int quantity, std::time_t expiry)
        : Product(name, price, quantity), expiryDate(expiry) {}

bool ExpiringProduct::isExpired() const {
    return std::time(nullptr) > expiryDate;
}
