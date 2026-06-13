/* Q1. Write a C program to display value using pointer to pointer. */

#include <stdio.h>

int main()
{
    int a = 10;
    int *ptr = &a;
    int **pptr = &ptr;

    printf("Value of a = %d\n", a);
    printf("Using ptr = %d\n", *ptr);
    printf("Using pptr = %d\n", **pptr);

    return 0;
}