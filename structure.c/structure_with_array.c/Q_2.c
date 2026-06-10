#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    int n, i, maxIndex = 0;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee e[n];

    for(i = 0; i < n; i++) {
        printf("Enter id, name, salary: ");
        scanf("%d %s %f", &e[i].id, e[i].name, &e[i].salary);
    }

    for(i = 1; i < n; i++) {
        if(e[i].salary > e[maxIndex].salary)
            maxIndex = i;
    }

    printf("\nHighest Salary Employee: %s (%.2f)\n",
           e[maxIndex].name, e[maxIndex].salary);

    return 0;
}