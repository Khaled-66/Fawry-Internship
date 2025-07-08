#pragma once
#include "Product/Product.h"
#include <ctime>

class ExpiringProduct : public Product {
    std::time_t expiryDate;

public:
    ExpiringProduct(std::string name, double price, int quantity, std::time_t expiry);
    bool isExpired() const override;
};
