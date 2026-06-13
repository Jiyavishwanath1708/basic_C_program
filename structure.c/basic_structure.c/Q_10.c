#include <stdio.h>

struct Rectangle {
    int l, w;
};

int main() {
    struct Rectangle r;

    scanf("%d %d", &r.l, &r.w);

    printf("Area=%d\n", r.l * r.w);
    printf("Perimeter=%d\n", 2*(r.l + r.w));

    return 0;
}