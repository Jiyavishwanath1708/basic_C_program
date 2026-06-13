#include <stdio.h>

struct Employee {
    int id;
    char name[50];
};

int main() {
    struct Employee e = {101,"Raj"};
    struct Employee *ptr = &e;

    printf("%d %s", ptr->id, ptr->name);

    return 0;
}