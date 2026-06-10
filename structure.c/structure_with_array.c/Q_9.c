#include <stdio.h>

struct Student {
    int roll;
    char name[50];
};

int main() {
    int n, i, key, found = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for(i = 0; i < n; i++) {
        scanf("%d %s", &s[i].roll, s[i].name);
    }

    printf("Enter roll no to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(s[i].roll == key) {
            printf("Found: %s\n", s[i].name);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Not Found\n");

    return 0;
}