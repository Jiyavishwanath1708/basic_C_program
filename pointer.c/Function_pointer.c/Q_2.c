/* Q2. Write a C program to perform addition using a function pointer. */

#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int (*ptr)(int, int);

    ptr = add;

    printf("Sum = %d", ptr(10, 20));

    return 0;
}