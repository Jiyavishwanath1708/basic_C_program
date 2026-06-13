# 📂 File Handling in C

A collection of C programs demonstrating various file handling concepts. This repository is organized topic-wise to provide a structured approach to learning text files and binary files in C.

---

## 📚 Concepts Covered

### 01 Basic File Operations

* Creating a file
* Reading a character from a file
* Writing a character to a file

### 02 Character-Based File Handling

* `getc()`
* `putc()`
* Skipping uppercase characters
* Skipping lowercase characters
* Counting uppercase letters, lowercase letters, digits, and special characters

### 03 String-Based File Handling

* `fgets()`
* `fputs()`
* Extracting vowels from a string
* Converting lowercase letters to uppercase

### 04 Formatted File Handling

* `fprintf()`
* `fscanf()`
* Employee records
* Student records
* Filtering records based on conditions
* Working with append mode

### 05 Binary File Handling

* `fwrite()`
* `fread()`
* Storing float values
* Finding the maximum value
* Structure-based binary files

---

## 📁 Folder Structure

```text
File_Handling
│
├── 01_Basic_File_Operations
├── 02_getc_putc
├── 03_fgets_fputs
├── 04_fprintf_fscanf
├── 05_Binary_File_Handling
│
└── README.md
```

---

## 📋 Programs Included

| Folder                   | Programs                                                                                     |
| ------------------------ | -------------------------------------------------------------------------------------------- |
| 01_Basic_File_Operations | create_file.c, read_character.c, write_character.c                                           |
| 02_getc_putc             | skip_uppercase.c, skip_lowercase.c, count_characters.c                                       |
| 03_fgets_fputs           | vowels_in_string.c, uppercase_conversion.c                                                   |
| 04_fprintf_fscanf        | employee_salary.c, student_records.c, passed_students.c, integer_sum_append.c, car_details.c |
| 05_Binary_File_Handling  | float_numbers.c, maximum_float.c, student_structure_binary.c                                 |

---

## 🛠 Technologies Used

* Language: C
* Compiler: GCC
* IDE: VS Code

---

## 📌 Sample Output

### Character Count

```text
Uppercase letters = 5
Lowercase letters = 12
Digits = 4
Special characters = 3
```

### Student Record

```text
Roll Number = 101
Name = Rahul
Marks = 85.50
```

### Maximum Float Number

```text
Maximum number = 98.70
```

---

## 🎯 Learning Outcomes

After completing these programs, you will understand:

* Text file operations
* Binary file operations
* Different file modes (`r`, `w`, `a`, `rb`, `wb`)
* Character and string I/O functions
* Formatted input/output functions
* Reading and writing structures to files
* Record filtering and data processing

---

⭐ This repository is part of my C Programming journey and focuses on building strong fundamentals in File Handling.
