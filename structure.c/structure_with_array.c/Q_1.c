#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main()
{
      int i,n;
    
    printf("How many students do you want to enter? ");
    scanf("%d", &n);

    struct Student s[n];
    printf("You want to enter details of %d students.\n", n);

    // Input details
    for(i = 0; i < n; i++)
    {
        printf("Enter details of Student %d\n", i + 1);

        printf(" Enter your Roll Number,Name and Marks\n");
        scanf("%d %s %f", &s[i].rollNo,s[i].name,&s[i].marks);
    }

    // Display details
    printf("\nStudent Records:\n");

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number: %d\n", s[i].rollNo);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}