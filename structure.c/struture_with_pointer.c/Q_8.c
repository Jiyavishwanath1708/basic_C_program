#include <stdio.h>

struct Student {
    float per;
};

void update(struct Student *s) {
    s->per = 90;
}

int main() {
    struct Student s={75};

    update(&s);

    printf("%.2f",s.per);

    return 0;
}