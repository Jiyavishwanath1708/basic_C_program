/* Q4. Write a C program to find square of a number using pointer. */

#include <stdio.h>

int main()
{
    int num;
    int *ptr;

    printf("Enter a number: ");
    scanf("%d", &num);

    ptr = &num;

    printf("Square = %d", (*ptr) * (*ptr));

    return 0;
}