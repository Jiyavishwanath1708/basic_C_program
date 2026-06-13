---

# 📘 Structure Programs in C

This folder contains C programs based on **Structures**, which is a user-defined data type in C used to store different types of variables under a single name.

---

## 📂 Folder Contents

This folder includes beginner-friendly programs to understand structures in C:

```
Structure/
│
├── student_structure.c        # Basic structure example (Student details)
├── array_of_structure.c       # Array of structures
├── nested_structure.c         # Structure inside structure
├── structure_pointer.c        # Pointer with structures
├── structure_functions.c      # Passing structure to function
└── README.md                  # Documentation
```

---

## 📌 Concepts Covered

* Definition of Structure
* Declaring Structure Variables
* Accessing Structure Members using dot (.) operator
* Array of Structures
* Nested Structures
* Pointers with Structures
* Passing Structures to Functions

---

## 🧠 What is a Structure in C?

A **structure** is a user-defined data type in C that allows grouping different types of variables.

### 📍 Syntax:

```c
struct Student {
    int id;
    char name[50];
    float marks;
};
```

---

## 📍 Example Program

```c
#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s1;

    s1.id = 101;
    s1.marks = 85.5;

    printf("Enter name: ");
    scanf("%s", s1.name);

    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
```

---

## 🔥 Key Features of Structures

* Store different data types together
* Useful for real-world data modeling (Student, Employee, etc.)
* Foundation for advanced data structures
* Helps in organizing complex data

---

## 🚀 How to Run

```bash
gcc filename.c -o output
./output
```

Example:

```bash
gcc student_structure.c -o student
./student
```

---

## 👨‍💻 Author

**Jiya Vishwanath**

---
