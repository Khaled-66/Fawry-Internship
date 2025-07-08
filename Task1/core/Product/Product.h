#pragma once
#include <string>

class Product {
protected:
    std::string name;
    double price;
    int quantity;

public:
    Product(std::string name, double price, int quantity);
    virtual ~Product() {}

    std::string getName() const;
    double getPrice() const;
    int getQuantity() const;
    void reduceQuantity(int amount);

    virtual bool isExpired() const { return false; }
    virtual bool requiresShipping() const { return false; }
    virtual double getWeight() const { return 0.0; }
};
