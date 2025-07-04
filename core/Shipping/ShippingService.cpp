#include "ShippingService.h"

double ShippingService::shipItems(const std::vector<IShippable*>& items) {
    double total = 0;
    for (const auto& item : items) {
        total += calculateItemShipping(item->getWeight());
    }
    return total;
}
