#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    struct Student s;

    scanf("%d %s %f", &s.roll_no, s.name, &s.marks);

    printf("%d %s %.2f\n", s.roll_no, s.name, s.marks);

    return 0;
}