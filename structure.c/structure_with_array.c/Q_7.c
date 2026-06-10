#include <stdio.h>

struct Marks {
    int m[5];
};

int main() {
    struct Marks s;
    int i, total = 0;

    printf("Enter 5 marks: ");

    for(i = 0; i < 5; i++) {
        scanf("%d", &s.m[i]);
        total += s.m[i];
    }

    printf("Total = %d\n", total);

    return 0;
}