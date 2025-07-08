#include "ShippableExpiringProduct.h"

ShippableExpiringProduct::ShippableExpiringProduct(std::string name, double price, int quantity, std::time_t expiry, double weight)
        : ExpiringProduct(name, price, quantity, expiry), weight(weight) {}

bool ShippableExpiringProduct::requiresShipping() const { return true; }
double ShippableExpiringProduct::getWeight() const { return weight; }
std::string ShippableExpiringProduct::getName() const { return name; }