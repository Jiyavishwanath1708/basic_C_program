#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
};

int main() {
    struct Student *ptr;

    ptr = (struct Student *)malloc(sizeof(struct Student));

    scanf("%d", &ptr->roll);

    printf("%d", ptr->roll);

    free(ptr);

    return 0;
}