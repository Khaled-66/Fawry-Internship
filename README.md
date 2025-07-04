# Fawry Internship Task – E-commerce System 🛒

This project is a modular C++ e-commerce system developed as part of the Fawry internship application.

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

## 🖼️ Screenshots

**Main Sample:**

![image](https://github.com/user-attachments/assets/2e3aa8a1-b981-4170-8af3-3f27b5bd80f3)


**Output Structure:**

![image](https://github.com/user-attachments/assets/70efff22-678d-4f3d-8407-14667c3830da)




> To use this, create a folder named `images/` and place your `.png`, `.jpg`, or `.gif` files there.

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
