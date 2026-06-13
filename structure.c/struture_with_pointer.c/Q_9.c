#include <stdio.h>

struct Point {
    int x,y;
};

void swap(struct Point *a, struct Point *b) {
    struct Point temp;

    temp=*a;
    *a=*b;
    *b=temp;
}

int main() {
    struct Point p1={1,2},p2={3,4};

    swap(&p1,&p2);

    printf("%d %d\n",p1.x,p1.y);
    printf("%d %d",p2.x,p2.y);

    return 0;
}