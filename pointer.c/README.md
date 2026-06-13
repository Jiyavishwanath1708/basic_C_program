---

# 📘 Pointer Programs in C

## 📌 Overview

This folder contains well-structured C programs to understand **Pointers in C programming**.
Pointers are a core concept in C that allow direct memory manipulation, efficient data handling, and are widely used in advanced programming concepts like dynamic memory allocation and data structures.

---

## 📂 Folder Structure

```text
Pointer/
│
├── pointer_basic.c          → Basic pointer introduction
├── pointer_arithmetic.c     → Pointer arithmetic operations
├── pointer_array.c          → Arrays using pointers
├── pointer_function.c       → Call by reference using pointers
├── pointer_structure.c      → Pointers with structures
├── double_pointer.c         → Pointer to pointer concept
└── README.md                → Documentation
```

## 📌 What is a Pointer?

A pointer is a variable that stores the **memory address of another variable**.

---

## 📍 Basic Syntax

```c
int *ptr;
```

* `*` → Declares pointer variable
* `&` → Used to get address of a variable
* `*` → Used to access value at address (dereferencing)

---

## 📍 Example: Basic Pointer Program

```c
#include <stdio.h>

int main() {
    int a = 10;
    int *ptr = &a;

    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", &a);
    printf("Pointer stores address = %p\n", ptr);
    printf("Value using pointer = %d\n", *ptr);

    return 0;
}
```

---

## 🔍 Key Topics Covered

### 1️⃣ Basic Pointers

* Declaration and initialization
* Address and value operators

### 2️⃣ Pointer Arithmetic

* Increment and decrement of pointers
* Traversing arrays using pointers

### 3️⃣ Pointers with Arrays

* Array name as pointer
* Accessing elements using pointers

### 4️⃣ Pointers with Functions

* Call by reference
* Modifying original values

### 5️⃣ Pointers with Structures

* Accessing structure members using `->` operator

### 6️⃣ Double Pointers

* Pointer pointing to another pointer

---

## ⚠️ Important Notes

* Always initialize pointers before use
* Avoid dereferencing NULL or uninitialized pointers
* Understand difference between `*ptr` and `&variable`
* Be careful with memory access to prevent errors

---

## 🚀 How to Compile & Run

### Compile:

```bash
gcc filename.c -o output
```

### Run:

```bash
./output
```

### Example:

```bash
gcc pointer_basic.c -o pointer_basic
./pointer_basic
```

## 👨‍💻 Author

**Jiya Vishwanath**

---
