cmake_minimum_required(VERSION 3.23)
project(fawryTask)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(core)
include_directories(core/Customer)
include_directories(core/Product)
include_directories(core/Shipping)
include_directories(main)
include_directories(Product_Types)
include_directories(Product_Types/Expiring)
include_directories(Product_Types/Shippable)
include_directories(Product_Types/Shippable_and_Expiring)

add_executable(fawryTask
        core/Customer/Customer.cpp
        core/Customer/Customer.h
        core/Product/Product.cpp
        core/Product/Product.h
        core/Shipping/ShippingService.cpp
        core/Shipping/ShippingService.h
        main/main.cpp
        Product_Types/Expiring/ExpiringProduct.cpp
        Product_Types/Expiring/ExpiringProduct.h
        Product_Types/Shippable/ShippableProduct.cpp
        Product_Types/Shippable/ShippableProduct.h
        Product_Types/Shippable_and_Expiring/ShippableExpiringProduct.cpp
        Product_Types/Shippable_and_Expiring/ShippableExpiringProduct.h)
