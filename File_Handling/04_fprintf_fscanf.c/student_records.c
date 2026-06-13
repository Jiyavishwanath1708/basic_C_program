/* Write and read student records using fprintf() and fscanf() */

#include <stdio.h>

int main()
{
    FILE *fp;
    int roll;
    char name[20];
    float marks;

    printf("Enter roll number: ");
    scanf("%d", &roll);

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter marks: ");
    scanf("%f", &marks);

    fp = fopen("student.txt", "w");

    if (fp == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }

    fprintf(fp, "%d %s %.2f", roll, name, marks);

    fclose(fp);

    fp = fopen("student.txt", "r");

    if (fp == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }

    fscanf(fp, "%d %s %f", &roll, name, &marks);

    printf("\nStudent Details:\n");
    printf("Roll Number = %d\n", roll);
    printf("Name = %s\n", name);
    printf("Marks = %.2f\n", marks);

    fclose(fp);

    return 0;
}