#include <stdio.h>

struct Laptop {
    float price;
};

int main() {
    struct Laptop l;

    scanf("%f", &l.price);

    if(l.price < 50000)
        printf("Affordable\n");
    else
        printf("Expensive\n");

    return 0;
}