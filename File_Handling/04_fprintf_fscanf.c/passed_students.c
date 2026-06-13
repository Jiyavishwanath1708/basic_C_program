/* Write and read student records, display passed students */

#include <stdio.h>

int main()
{
    FILE *fp;
    int n, i, roll;
    char name[20];
    float marks;

    printf("Enter number of students: ");
    scanf("%d", &n);

    fp = fopen("student.txt", "w");

    if (fp == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }

    for (i = 1; i <= n; i++)
    {
        printf("\nEnter Roll Number, Name and Marks of Student %d: ", i);
        scanf("%d %s %f", &roll, name, &marks);

        fprintf(fp, "%d %s %.2f\n", roll, name, marks);
    }

    fclose(fp);

    fp = fopen("student.txt", "r");

    if (fp == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }

    printf("\nPassed Students:\n");

    while (fscanf(fp, "%d %s %f", &roll, name, &marks) != EOF)
    {
        if (marks >= 40)     /* Change to marks > 60 for Q12 */
        {
            printf("Roll Number = %d\n", roll);
            printf("Name = %s\n", name);
            printf("Marks = %.2f\n\n", marks);
        }
    }

    fclose(fp);

    return 0;
}