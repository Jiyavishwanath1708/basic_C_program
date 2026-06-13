#include <stdio.h>
#include <math.h>

struct Point {
    int x, y;
};

int main() {
    struct Point p1, p2;

    scanf("%d %d %d %d", &p1.x,&p1.y,&p2.x,&p2.y);

    printf("Distance=%.2f\n",
        sqrt((p2.x-p1.x)*(p2.x-p1.x) +
             (p2.y-p1.y)*(p2.y-p1.y)));

    return 0;
}