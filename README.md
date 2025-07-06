# Fawry Internship Task – E-commerce System 🛒

A modular and extensible C++ application for managing an e-commerce platform. It models products, customers, and shipping logic using clean object-oriented design and principles like SOLID and common design patterns.

---

## 🗂️ Project Structure

```
/EcommerceSystem
├── main/                          # Entry point of the application
│   └── main.cpp
│
├── core/                          # Core business logic
│   ├── Product/                   # Base Product class
│   │   ├── Product.h
│   │   └── Product.cpp
│   ├── Customer/                  # Customer logic
│   │   ├── Customer.h
│   │   └── Customer.cpp
│   └── ShippingService/           # Shipping services
│       ├── ShippingService.h
│       └── ShippingService.cpp
│
├── Product_Types/                 # Specialized product types
│   ├── ExpiringProduct/
│   │   ├── ExpiringProduct.h
│   │   └── ExpiringProduct.cpp
│   ├── ShippableProduct/
│   │   ├── ShippableProduct.h
│   │   └── ShippableProduct.cpp
│   └── ShippableExpiringProduct/
│       ├── ShippableExpiringProduct.h
│       └── ShippableExpiringProduct.cpp
│
└── ...
```
---
## SOLID Principles
| Principle                     | Application                                                                 |
| ----------------------------- | --------------------------------------------------------------------------- |
| **S** - Single Responsibility | Each class/module has a clear, single purpose                               |
| **O** - Open/Closed           | Easily add new product types without modifying existing code                |
| **L** - Liskov Substitution   | Subtypes like `ExpiringProduct` or `ShippableProduct` can replace `Product` |
| **I** - Interface Segregation | (Partially) Product interface kept minimal and extendable                   |
| **D** - Dependency Inversion  |                                     -        |


---

## 🖼️ Screenshots

**Main Sample:**

![image](https://github.com/user-attachments/assets/2e3aa8a1-b981-4170-8af3-3f27b5bd80f3)


**Output Structure:**

![image](https://github.com/user-attachments/assets/70efff22-678d-4f3d-8407-14667c3830da)

**Insufficient balance Handling:**

![image](https://github.com/user-attachments/assets/ecdeccbd-5892-423c-b54b-4dbc4c2f1779)

**Insufficient stock Handling:**

![image](https://github.com/user-attachments/assets/283573eb-b9d7-4ab1-bc3b-cd669425534d)



---

## ⚙️ Build Instructions

> **Requires:** CMake and a C++ compiler (e.g., g++)

```bash
mkdir build && cd build
cmake ..
make
./main
```

---

## 🧾 Notes

- `.idea/` and `cmake-build-debug/` folders are ignored from version control for cleaner repo visibility.
- Follows SOLID principles and modular OOP design for maintainability.

---
