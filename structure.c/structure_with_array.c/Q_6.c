#include <stdio.h>

struct City {
    char name[50];
    long population;
};

int main() {
    int n, i, min = 0;

    printf("Enter number of cities: ");
    scanf("%d", &n);

    struct City c[n];

    for(i = 0; i < n; i++) {
        scanf("%s %ld", c[i].name, &c[i].population);
    }

    for(i = 1; i < n; i++) {
        if(c[i].population < c[min].population)
            min = i;
    }

    printf("\nSmallest city: %s (%ld)\n",
           c[min].name, c[min].population);

    return 0;
}