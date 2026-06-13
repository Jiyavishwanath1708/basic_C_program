#include <stdio.h>
#include <stdlib.h>

struct Date {
    int d,m,y;
};

void set(struct Date *dt) {
    scanf("%d%d%d",&dt->d,&dt->m,&dt->y);
}

void print(struct Date *dt) {
    printf("%d-%d-%d",dt->d,dt->m,dt->y);
}

int main() {
    struct Date *dt;

    dt=(struct Date *)malloc(sizeof(struct Date));

    set(dt);
    print(dt);

    free(dt);

    return 0;
}