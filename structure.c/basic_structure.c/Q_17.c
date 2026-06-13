#include <stdio.h>

struct Student {
    int marks;
};

int main() {
    struct Student s;

    scanf("%d", &s.marks);

    if(s.marks >= 80)
        printf("A Grade\n");
    else if(s.marks >= 60)
        printf("B Grade\n");
    else
        printf("C Grade\n");

    return 0;
}