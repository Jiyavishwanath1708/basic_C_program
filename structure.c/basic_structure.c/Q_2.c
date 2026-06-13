#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e;

    scanf("%d %s %f", &e.id, e.name, &e.salary);

    printf("\nID\tName\tSalary\n");
    printf("%d\t%s\t%.2f\n", e.id, e.name, e.salary);

    return 0;
}