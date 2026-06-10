#include <stdio.h>

struct Book {
    int id;
    char name[50];
    float price;
};

int main() {
    struct Book b[10];
    int i;

    for(i = 0; i < 10; i++) {
        printf("Enter id, name, price: ");
        scanf("%d %s %f", &b[i].id, b[i].name, &b[i].price);
    }

    printf("\nBooks above 500:\n");

    for(i = 0; i < 10; i++) {
        if(b[i].price > 500)
            printf("%s - %.2f\n", b[i].name, b[i].price);
    }

    return 0;
}