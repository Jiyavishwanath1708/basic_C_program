/* Append employee details and display employees with salary > 3000 */

#include <stdio.h>

int main()
{
    FILE *fp;
    int n, i, id;
    char name[20];
    float salary;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    fp = fopen("employee.txt", "a");

    if (fp == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }

    for (i = 1; i <= n; i++)
    {
        printf("\nEnter Employee ID, Name and Salary of Employee %d: ", i);
        scanf("%d %s %f", &id, name, &salary);

        fprintf(fp, "%d %s %.2f\n", id, name, salary);
    }

    fclose(fp);

    fp = fopen("employee.txt", "r");

    if (fp == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }

    printf("\nEmployees having salary greater than 3000:\n");

    while (fscanf(fp, "%d %s %f", &id, name, &salary) != EOF)
    {
        if (salary > 3000)
        {
            printf("ID = %d\n", id);
            printf("Name = %s\n", name);
            printf("Salary = %.2f\n\n", salary);
        }
    }

    fclose(fp);

    return 0;
}