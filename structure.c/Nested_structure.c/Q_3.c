/* Q3. Define an Employee structure containing an Address structure
   and display employee details. */

#include <stdio.h>

struct Address {
    char city[30];
};

struct Employee {
    int id;
    char name[50];
    struct Address addr;
};

int main() {
    struct Employee e;

    scanf("%d %s %s",
          &e.id, e.name, e.addr.city);

    printf("%d %s %s",
           e.id, e.name, e.addr.city);

    return 0;
}