/* Q5. Define a Person structure containing Address and Contact
   structures and display all details. */

#include <stdio.h>

struct Address {
    char city[30];
};

struct Contact {
    long mobile;
};

struct Person {
    char name[50];
    struct Address addr;
    struct Contact con;
};

int main() {
    struct Person p;

    scanf("%s %s %ld",
          p.name,
          p.addr.city,
          &p.con.mobile);

    printf("%s %s %ld",
           p.name,
           p.addr.city,
           p.con.mobile);

    return 0;
}