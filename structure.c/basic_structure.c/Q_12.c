#include <stdio.h>

struct Student {
    int marks[3];
};

int main() {
    struct Student s;
    int i, total = 0;

    for(i = 0; i < 3; i++) {
        scanf("%d", &s.marks[i]);
        total += s.marks[i];
    }

    printf("Total=%d\n", total);
    printf("Percentage=%.2f\n", total/3.0);

    return 0;
}