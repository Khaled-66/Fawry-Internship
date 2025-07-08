#include "ShippableExpiringProduct.h"
#include "ShippableProduct.h"
#include "ExpiringProduct.h"
#include "Product.h"
#include "Customer.h"
#include "ShippingService.h"
#include <iostream>
#include <ctime>

int main() {
    std::time_t future = std::time(nullptr) + 86400;

    ShippableExpiringProduct cheese("Cheese", 20.0, 10, future, 2.0);
    ShippableProduct tv("TV", 500.0, 5, 15.0);
    Product scratchCard("Mobile Scratch Card", 10.0, 50);

    Customer cust("John", 2000);

    try {
        cust.addToCart(&cheese, 2);
        cust.addToCart(&tv, 1);
        cust.addToCart(&scratchCard, 2);
        cust.checkout();
    } catch (const std::exception& e) {
        std::cerr << "Checkout Failed: " << e.what() << "\n";
    }

    return 0;
}
