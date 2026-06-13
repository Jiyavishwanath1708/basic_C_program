#include <stdio.h>

struct Bank {
    float balance;
};

void deposit(struct Bank *b,float amount) {
    b->balance+=amount;
}

void withdraw(struct Bank *b,float amount) {
    b->balance-=amount;
}

int main() {
    struct Bank b={1000};

    deposit(&b,500);
    withdraw(&b,200);

    printf("%.2f",b.balance);

    return 0;
}