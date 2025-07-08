cmake_minimum_required(VERSION 3.23)
project(fawryTask)

set(CMAKE_CXX_STANDARD 14)

# ========== Task 1 ==========
set(TASK1_DIR Task1)

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

add_executable(task1
        ${TASK1_DIR}/core/Customer/Customer.cpp
        ${TASK1_DIR}/core/Product/Product.cpp
        ${TASK1_DIR}/core/Shipping/ShippingService.cpp
        ${TASK1_DIR}/main/main.cpp
        ${TASK1_DIR}/Product_Types/Expiring/ExpiringProduct.cpp
        ${TASK1_DIR}/Product_Types/Shippable/ShippableProduct.cpp
        ${TASK1_DIR}/Product_Types/Shippable_and_Expiring/ShippableExpiringProduct.cpp
        )

# ========== Task 2 ==========
set(TASK2_DIR Task2)

include_directories(
        ${TASK2_DIR}
        ${TASK2_DIR}/Book
        ${TASK2_DIR}/Book_Types
        ${TASK2_DIR}/Book_Types/DemoBook
        ${TASK2_DIR}/Book_Types/PaperBook
        ${TASK2_DIR}/Book_Types/EBook
        ${TASK2_DIR}/Services
        ${TASK2_DIR}/Store
        ${TASK2_DIR}/Test
        ${TASK2_DIR}/main
)

add_executable(task2
        ${TASK2_DIR}/Book/Book.cpp
        ${TASK2_DIR}/Book_Types/DemoBook/demo.cpp
        ${TASK2_DIR}/Book_Types/PaperBook/PaperBook.cpp
        ${TASK2_DIR}/Book_Types/EBook/EBook.cpp
        ${TASK2_DIR}/Store/inventory.cpp
        ${TASK2_DIR}/Test/QuantumBookstoreFullTest.cpp
        ${TASK2_DIR}/main/main.cpp
        )
