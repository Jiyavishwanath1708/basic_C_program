/* Q10. Write a program to allocate memory dynamically
   for a nested structure using malloc(). */

#include <stdio.h>
#include <stdlib.h>

struct Date {
    int year;
};

struct Student {
    char name[50];
    struct Date dob;
};

int main() {
    struct Student *ptr;

    ptr = (struct Student *)malloc(sizeof(struct Student));

    scanf("%s %d",
          ptr->name,
          &ptr->dob.year);

    printf("%s %d",
           ptr->name,
           ptr->dob.year);

    free(ptr);

    return 0;
}