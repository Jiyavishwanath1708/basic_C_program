#include <stdio.h>

struct Car {
    char model[50];
    char company[50];
    float price;
};

int main() {
    struct Car c;

    scanf("%s %s %f", c.model, c.company, &c.price);

    c.price = c.price - (0.10 * c.price);

    printf("%.2f\n", c.price);

    return 0;
}