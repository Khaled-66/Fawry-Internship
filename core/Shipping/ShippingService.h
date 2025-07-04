#pragma once
#include <vector>
#include <string>

class IShippable {
public:
    virtual std::string getName() const = 0;
    virtual double getWeight() const = 0;
    virtual ~IShippable() {}
};

class ShippingService {
public:
    static double shipItems(const std::vector<IShippable*>& items);

    static double calculateItemShipping(double weight) {
        return weight * 5.0;  // Example rate: 5 EGP per kg
    }
};
