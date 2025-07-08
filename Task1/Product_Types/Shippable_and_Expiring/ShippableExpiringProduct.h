#pragma once
#include "ExpiringProduct.h"
#include "ShippingService.h"

class ShippableExpiringProduct : public ExpiringProduct, public IShippable {
    double weight;

public:
    ShippableExpiringProduct(std::string name, double price, int quantity, std::time_t expiry, double weight);
    bool requiresShipping() const override;
    double getWeight() const override;
    std::string getName() const override;
};
