#include <stdio.h>

struct Complex {
    int r, i;
};

int main() {
    struct Complex c;

    scanf("%d %d", &c.r, &c.i);

    printf("%d + %di\n", c.r, c.i);

    return 0;
}