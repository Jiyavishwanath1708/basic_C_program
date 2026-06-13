#include <stdio.h>

struct Date {
    int d, m, y;
};

int main() {
    struct Date d1, d2;

    scanf("%d %d %d", &d1.d, &d1.m, &d1.y);
    scanf("%d %d %d", &d2.d, &d2.m, &d2.y);

    if(d1.y < d2.y || (d1.y==d2.y && d1.m<d2.m) ||
       (d1.y==d2.y && d1.m==d2.m && d1.d<d2.d))
        printf("Date1 is earlier\n");
    else if(d1.d==d2.d && d1.m==d2.m && d1.y==d2.y)
        printf("Equal\n");
    else
        printf("Date2 is earlier\n");

    return 0;
}