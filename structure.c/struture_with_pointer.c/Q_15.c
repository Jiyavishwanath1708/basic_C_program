#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
};

int main() {
    struct Student *ptr;

    ptr=(struct Student *)malloc(sizeof(struct Student));

    ptr->roll=101;

    printf("%d\n",ptr->roll);

    free(ptr);

    return 0;
}