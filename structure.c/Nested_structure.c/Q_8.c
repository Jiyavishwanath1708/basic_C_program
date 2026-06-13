/* Q8. Write a program to access nested structure members
   using a pointer and arrow operator. */

#include <stdio.h>

struct Date {
    int year;
};

struct Student {
    struct Date dob;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;

    ptr->dob.year = 2005;

    printf("%d", ptr->dob.year);

    return 0;
}