#include <stdio.h>

struct Complex {
    int real, imag;
};

void add(struct Complex *a, struct Complex *b) {
    printf("%d + %di", a->real+b->real, a->imag+b->imag);
}

int main() {
    struct Complex c1={2,3}, c2={4,5};

    add(&c1,&c2);

    return 0;
}