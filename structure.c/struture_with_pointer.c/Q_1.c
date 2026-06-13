#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;

    scanf("%d %s %f", &ptr->roll, ptr->name, &ptr->marks);

    printf("%d %s %.2f", ptr->roll, ptr->name, ptr->marks);

    return 0;
}