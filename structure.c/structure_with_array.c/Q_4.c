#include <stdio.h>

struct Cricketer {
    char name[50];
    int runs;
};

int main() {
    int n, i, max = 0;

    printf("Enter number of players: ");
    scanf("%d", &n);

    struct Cricketer c[n];

    for(i = 0; i < n; i++) {
        printf("Enter name and runs: ");
        scanf("%s %d", c[i].name, &c[i].runs);
    }

    for(i = 1; i < n; i++) {
        if(c[i].runs > c[max].runs)
            max = i;
    }

    printf("\nTop scorer: %s (%d runs)\n",
           c[max].name, c[max].runs);

    return 0;
}