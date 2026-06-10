#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float per;
};

int main() {
    int n, i, j;
    struct Student temp;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for(i = 0; i < n; i++) {
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].per);
    }

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(s[i].per < s[j].per) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nSorted Students:\n");
    for(i = 0; i < n; i++) {
        printf("%d %s %.2f\n", s[i].roll, s[i].name, s[i].per);
    }

    return 0;
}