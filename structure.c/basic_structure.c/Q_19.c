#include <stdio.h>

struct Movie {
    int duration;
};

int main() {
    struct Movie m;

    scanf("%d", &m.duration);

    if(m.duration < 90)
        printf("Short Movie\n");
    else
        printf("Long Movie\n");

    return 0;
}