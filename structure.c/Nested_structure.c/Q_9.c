/* Q9. Write a program to pass a nested structure to a function
   and display its contents. */

#include <stdio.h>

struct Date {
    int year;
};

struct Student {
    char name[50];
    struct Date dob;
};

void display(struct Student s) {
    printf("%s %d",
           s.name,
           s.dob.year);
}

int main() {
    struct Student s;

    scanf("%s %d",
          s.name,
          &s.dob.year);

    display(s);

    return 0;
}