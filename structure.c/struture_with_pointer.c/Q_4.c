#include <stdio.h>

struct Book {
    int id;
};

int main() {
    struct Book b[3] = {{1},{2},{3}};
    struct Book *ptr = b;
    int i;

    for(i=0;i<3;i++)
        printf("%d ", (ptr+i)->id);

    return 0;
}