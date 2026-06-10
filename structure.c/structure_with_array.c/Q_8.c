#include <stdio.h>

struct Product {
    int id;
    char name[50];
    int qty;
    int reorder;
};

int main() {
    struct Product p[10];
    int i;

    for(i = 0; i < 10; i++) {
        scanf("%d %s %d %d",
              &p[i].id, p[i].name, &p[i].qty, &p[i].reorder);
    }

    printf("\nReorder Products:\n");

    for(i = 0; i < 10; i++) {
        if(p[i].qty < p[i].reorder)
            printf("%s\n", p[i].name);
    }

    return 0;
}