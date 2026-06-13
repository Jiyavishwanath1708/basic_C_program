/* Q5. Write a C program to implement a simple calculator using function pointers. */

#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int main()
{
    int (*ptr)(int, int);

    ptr = add;
    printf("Addition = %d\n", ptr(10, 5));

    ptr = sub;
    printf("Subtraction = %d", ptr(10, 5));

    return 0;
}