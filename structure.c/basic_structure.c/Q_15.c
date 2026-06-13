#include <stdio.h>

struct Employee {
    float salary;
};

int main() {
    struct Employee e;

    scanf("%f", &e.salary);

    if(e.salary > 50000)
        printf("High Tax\n");
    else
        printf("Low Tax\n");

    return 0;
}