#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
};

int main() {
    int n,i;

    scanf("%d",&n);

    struct Employee *e;
    e=(struct Employee *)malloc(n*sizeof(struct Employee));

    for(i=0;i<n;i++)
        scanf("%d",&e[i].id);

    for(i=0;i<n;i++)
        printf("%d\n",e[i].id);

    free(e);

    return 0;
}