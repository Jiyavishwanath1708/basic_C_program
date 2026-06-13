#include <stdio.h>

struct DOB {
    int d,m,y;
};

struct Student {
    int roll;
    struct DOB dob;
};

int main() {
    struct Student s;
    struct Student *ptr=&s;

    scanf("%d%d%d%d",&ptr->roll,
                     &ptr->dob.d,
                     &ptr->dob.m,
                     &ptr->dob.y);

    printf("%d %d-%d-%d",
           ptr->roll,
           ptr->dob.d,
           ptr->dob.m,
           ptr->dob.y);

    return 0;
}