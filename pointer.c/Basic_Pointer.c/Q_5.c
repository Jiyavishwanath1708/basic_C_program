/* Q5. Write a C program to increment a number by 1 using pointer. */

#include <stdio.h>

int main()
{
    int num;
    int *ptr;

    printf("Enter a number: ");
    scanf("%d", &num);

    ptr = &num;

    (*ptr)++;

    printf("Updated value = %d", *ptr);

    return 0;
}