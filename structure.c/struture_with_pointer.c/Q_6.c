#include <stdio.h>

struct Rectangle {
    int length, width;
};

void area(struct Rectangle *r) {
    printf("Area = %d", r->length*r->width);
}

int main() {
    struct Rectangle r={10,5};

    area(&r);

    return 0;
}