# Quantum Book Store – Task 2

This module implements an extensible online book store in C++. It supports multiple book types, inventory management, and book purchasing with simulated delivery mechanisms.

---

## Features

### Book Types

- **PaperBook**
  - Has stock count
  - Can be shipped using the `ShippingService`
- **EBook**
  - Has a file type (e.g., PDF, EPUB)
  - Delivered via email using the `MailService`
- **DemoBook**
  - Not for sale
  - Exists for display purposes only

---

## Functionality

- Add books to the inventory
- Remove outdated books (based on publication year threshold)
- Buy books using:
  - ISBN
  - Quantity
  - Email address (for EBooks)
  - Shipping address (for PaperBooks)
- Handles:
  - Quantity checks
  - Delivery service simulation
  - Exception handling for invalid purchases

---

## Design Overview

- Object-Oriented Design
  - Base class: `Book`
  - Derived classes: `PaperBook`, `EBook`, `DemoBook`
- **Open/Closed Principle**
  - New book types can be added without modifying existing logic
- Use of abstract interfaces and virtual methods
- Console output is prefixed with:  
  `Quantum book store - ...`  

---

## Folder Structure

```
QuantumBookstore/
│
├── Book/                           
│   ├── Book.h
│   └── Book.cpp
│
├── BookTypes/                     
│   ├── PaperBook/
│   │   ├── PaperBook.h
│   │   └── PaperBook.cpp
│   │
│   ├── EBook/
│   │   ├── EBook.h
│   │   └── EBook.cpp
│   │
│   ├── DemoBook/
│       ├── DemoBook.h
│       └── DemoBook.cpp
│
├── Store/
│   ├── QuantumBookstore.h
│   └── QuantumBookstore.cpp
│
├── Services/
│   ├── ShippingService.h
│   └── MailService.h
│
│
├── Test/
|   ├── test.h
│   └── test.cpp
│
├── build/                      
├── README.md
└── CMakeLists.txt / Makefile
```

---

## Build and Run Instructions (CMake + CLion)

1. Open the project in CLion.
2. Navigate to `Run > Edit Configurations...`.
3. Add a new configuration:
   - Type: **CMake Application**
   - Target: `task2`
4. Set this configuration as default.
5. Click Run or press `Shift + F10`.

---

## Test Class

Run `QuantumBookstoreFullTest` to verify the following:

- Adding books to the inventory
- Buying PaperBooks and EBooks
- Attempting to buy a DemoBook (not allowed)
- Handling exceptions and printing correct messages
- Removing outdated books

---

## Notes

- No real email or shipping logic is implemented.
- Delivery is simulated through console output.
- Error handling is implemented for invalid purchases and unavailable books.
