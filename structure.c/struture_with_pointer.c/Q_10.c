#include <stdio.h>

struct Car {
    int price;
};

int main() {
    struct Car c[3]={{100},{200},{300}};
    struct Car *ptr=c;
    int i;

    for(i=0;i<3;i++)
        printf("%d ",(ptr+i)->price);

    return 0;
}