#include <stdio.h>

struct Bank {
    int acc;
    float bal;
};

int main() {
    struct Bank b;

    scanf("%d %f", &b.acc, &b.bal);

    if(b.bal < 1000)
        printf("Low Balance\n");
    else
        printf("OK\n");

    return 0;
}