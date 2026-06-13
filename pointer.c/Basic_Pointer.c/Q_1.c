/* Q1. Write a C program to display value using pointer. */

#include <stdio.h>

int main()
{
    int num;
    int *ptr;

    printf("Enter a number: ");
    scanf("%d", &num);

    ptr = &num;

    printf("Value = %d", *ptr);

    return 0;
}