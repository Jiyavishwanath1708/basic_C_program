#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct Book b = {101, "C_Language", "Dennis", 450.50};

    printf("%d %s %s %.2f\n", b.id, b.title, b.author, b.price);

    return 0;
}