#pragma once
#include "Product.h"
#include "ShippingService.h"
#include <vector>
#include <map>

class Customer {
    std::string name;
    double balance;
    std::map<Product*, int> cart;

public:
    Customer(std::string name, double balance);
    void addToCart(Product* product, int quantity);
    void checkout();
    double getBalance() const;
};
