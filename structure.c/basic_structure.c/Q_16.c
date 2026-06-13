#include <stdio.h>

struct Student {
    int roll;
};

int main() {
    struct Student s1 = {101}, s2;

    s2 = s1;

    printf("%d\n", s2.roll);

    return 0;
}