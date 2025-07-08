cmake_minimum_required(VERSION 3.23)
project(fawryTask)

set(CMAKE_CXX_STANDARD 14)

# Base path
set(TASK1_DIR Task1)

# Include directories
include_directories(
        ${TASK1_DIR}
        ${TASK1_DIR}/core
        ${TASK1_DIR}/core/Customer
        ${TASK1_DIR}/core/Product
        ${TASK1_DIR}/core/Shipping
        ${TASK1_DIR}/main
        ${TASK1_DIR}/Product_Types
        ${TASK1_DIR}/Product_Types/Expiring
        ${TASK1_DIR}/Product_Types/Shippable
        ${TASK1_DIR}/Product_Types/Shippable_and_Expiring
)

# Add executable and source files
add_executable(fawryTask
        ${TASK1_DIR}/core/Customer/Customer.cpp
        ${TASK1_DIR}/core/Product/Product.cpp
        ${TASK1_DIR}/core/Shipping/ShippingService.cpp
        ${TASK1_DIR}/main/main.cpp
        ${TASK1_DIR}/Product_Types/Expiring/ExpiringProduct.cpp
        ${TASK1_DIR}/Product_Types/Shippable/ShippableProduct.cpp
        ${TASK1_DIR}/Product_Types/Shippable_and_Expiring/ShippableExpiringProduct.cpp
        )
