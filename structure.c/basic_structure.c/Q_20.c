#include <stdio.h>

struct DOB {
    int d, m, y;
};

struct Student {
    char name[50];
    struct DOB dob;
};

int main() {
    struct Student s;

    scanf("%s %d %d %d",
        s.name, &s.dob.d, &s.dob.m, &s.dob.y);

    printf("%s %02d-%02d-%d\n",
        s.name, s.dob.d, s.dob.m, s.dob.y);

    return 0;
}