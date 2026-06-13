/* Q4. Define a Book structure containing Author details
   and display the information. */

#include <stdio.h>

struct Author {
    char name[50];
};

struct Book {
    char title[50];
    struct Author author;
};

int main() {
    struct Book b;

    scanf("%s %s",
          b.title,
          b.author.name);

    printf("%s written by %s",
           b.title,
           b.author.name);

    return 0;
}