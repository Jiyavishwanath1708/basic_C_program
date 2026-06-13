#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person p;

    scanf("%s %d", p.name, &p.age);

    if(p.age >= 18)
        printf("Eligible\n");
    else
        printf("Not Eligible\n");

    return 0;
}