#include <stdio.h>

struct Time {
    int h, m, s;
};

int main() {
    struct Time t;

    scanf("%d %d %d", &t.h, &t.m, &t.s);

    printf("%02d:%02d:%02d\n", t.h, t.m, t.s);

    return 0;
}