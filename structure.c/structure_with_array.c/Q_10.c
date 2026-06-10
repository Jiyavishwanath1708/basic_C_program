#include <stdio.h>

struct Player {
    char name[50];
    char team[20];
    int score;
};

int main() {
    int n, i;

    printf("Enter number of players: ");
    scanf("%d", &n);

    struct Player p[n];

    for(i = 0; i < n; i++) {
        scanf("%s %s %d",
              p[i].name, p[i].team, &p[i].score);
    }

    printf("\nPlayer Data:\n");

    for(i = 0; i < n; i++) {
        printf("%s %s %d\n",
               p[i].name, p[i].team, p[i].score);
    }

    return 0;
}