/* Q2. Define a Student structure containing a Date structure
   and display student details with DOB. */

#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Student {
    char name[50];
    struct Date dob;
};

int main() {
    struct Student s;

    scanf("%s %d %d %d",
          s.name,
          &s.dob.day,
          &s.dob.month,
          &s.dob.year);

    printf("%s\n", s.name);
    printf("%02d-%02d-%d",
           s.dob.day,
           s.dob.month,
           s.dob.year);

    return 0;
}