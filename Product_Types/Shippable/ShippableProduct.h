#pragma once
#include "Product.h"
#include "ShippingService.h"

class ShippableProduct : public Product, public IShippable {
    double weight;

public:
    ShippableProduct(std::string name, double price, int quantity, double weight);
    bool requiresShipping() const override;
    double getWeight() const override;
    std::string getName() const override;
};