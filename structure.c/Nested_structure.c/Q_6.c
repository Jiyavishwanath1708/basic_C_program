/* Q6. Write a program to access nested structure members
   using the dot operator. */

#include <stdio.h>

struct Date {
    int day;
};

struct Student {
    struct Date dob;
};

int main() {
    struct Student s;

    s.dob.day = 25;

    printf("%d", s.dob.day);

    return 0;
}