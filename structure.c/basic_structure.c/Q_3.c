#include <stdio.h>

struct Date {
    int d, m, y;
};

int main() {
    struct Date dt;

    scanf("%d %d %d", &dt.d, &dt.m, &dt.y);

    printf("%02d-%02d-%d\n", dt.d, dt.m, dt.y);

    return 0;
}