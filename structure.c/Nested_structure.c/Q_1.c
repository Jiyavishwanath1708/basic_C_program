/* Q1. Write a C program to demonstrate a basic nested structure
   where one structure is declared inside another structure. */

#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Student {
    int roll;
    char name[50];
    struct Date dob;
};

int main() {
    struct Student s;

    scanf("%d %s %d %d %d",
          &s.roll, s.name,
          &s.dob.day, &s.dob.month, &s.dob.year);

    printf("%d %s %02d-%02d-%d",
           s.roll, s.name,
           s.dob.day, s.dob.month, s.dob.year);

    return 0;
}