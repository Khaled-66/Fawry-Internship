# 🛠️ CMake Build & Task Selection

This project contains **two separate tasks** (`Task1` and `Task2`) within the same CMake project. You can choose which task to build and run by modifying the `CMakeLists.txt` file.

---

## 🔹 Default Build Target

By default, the project builds **both Task1 and Task2 source files into the same executable**. However, since both tasks contain a `main.cpp`, you must only include **one** `main.cpp` file in the `add_executable()` section at a time.

---

## ✅ How to Select Task1 or Task2

1. **Open** `CMakeLists.txt`.

2. **To run Task1**, ensure the following line is included:
    ```cmake
    ${TASK1_DIR}/main/main.cpp
    ```
    And **comment out or remove**:
    ```cmake
    Task2/main/main.cpp
    ```

3. **To run Task2**, do the opposite:
    ```cmake
    Task2/main/main.cpp
    ```
    And **comment out or remove** Task1’s `main.cpp`.

4. **Rebuild the project:**

    - **In CLion:**  
      Click `Build > Rebuild Project`

    - **Or via terminal:**
      ```bash
      cmake --build .
      ```

---

## 📌 Important Notes

- **Only one `main()` function can be linked** in a C++ executable. That's why only one `main.cpp` should be active at any time.
- You can use CMake variables or options in the future to toggle tasks dynamically, but for now manual switching is the safest.

---
