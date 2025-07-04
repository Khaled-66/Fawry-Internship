#include "ShippableProduct.h"

ShippableProduct::ShippableProduct(std::string name, double price, int quantity, double weight)
        : Product(name, price, quantity), weight(weight) {}

bool ShippableProduct::requiresShipping() const { return true; }
double ShippableProduct::getWeight() const { return weight; }
std::string ShippableProduct::getName() const { return name; }