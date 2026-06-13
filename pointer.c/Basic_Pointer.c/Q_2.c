/* Q2. Write a C program to add 5 to a number using pointer. */

#include <stdio.h>

int main()
{
    int num;
    int *ptr;

    printf("Enter a number: ");
    scanf("%d", &num);

    ptr = &num;

    *ptr = *ptr + 5;

    printf("Updated value = %d", *ptr);

    return 0;
}