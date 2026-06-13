#include <stdio.h>

struct Product {
    int code;
    char name[50];
    int qty;
    float price;
};

int main() {
    struct Product p;

    scanf("%d %s %d %f", &p.code, p.name, &p.qty, &p.price);

    printf("Total = %.2f\n", p.qty * p.price);

    return 0;
}