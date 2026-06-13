#include <stdio.h>
#include <stdlib.h>

struct Student {
    float per;
};

int main() {
    int n,i;

    scanf("%d",&n);

    struct Student *s;
    s=(struct Student *)malloc(n*sizeof(struct Student));

    for(i=0;i<n;i++)
        scanf("%f",&s[i].per);

    for(i=0;i<n;i++)
        if(s[i].per>70)
            printf("%.2f\n",s[i].per);

    free(s);

    return 0;
}