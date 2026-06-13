/* Q7. Write a program to create an array of nested structures
   and display the details. */

#include <stdio.h>

struct Date {
    int year;
};

struct Student {
    char name[50];
    struct Date dob;
};

int main() {
    struct Student s[2];
    int i;

    for(i=0;i<2;i++)
        scanf("%s %d",
              s[i].name,
              &s[i].dob.year);

    for(i=0;i<2;i++)
        printf("%s %d\n",
               s[i].name,
               s[i].dob.year);

    return 0;
}