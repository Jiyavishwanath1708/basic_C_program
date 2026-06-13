/* Store and display student records using binary files */

#include <stdio.h>

struct Student
{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    FILE *fp;
    struct Student s;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    fp = fopen("student.dat", "wb");

    for (i = 0; i < n; i++)
    {
        printf("\nEnter Roll, Name and Marks of Student %d: ", i + 1);
        scanf("%d %s %f", &s.roll, s.name, &s.marks);

        fwrite(&s, sizeof(struct Student), 1, fp);
    }

    fclose(fp);

    fp = fopen("student.dat", "rb");

    printf("\nStudent Details:\n");

    while (fread(&s, sizeof(struct Student), 1, fp) == 1)
    {
        printf("Roll = %d\n", s.roll);
        printf("Name = %s\n", s.name);
        printf("Marks = %.2f\n\n", s.marks);
    }

    fclose(fp);

    return 0;
}