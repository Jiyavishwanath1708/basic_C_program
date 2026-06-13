/* Q3. Write a C program to modify a variable using pointer to pointer. */

#include <stdio.h>

int main()
{
    int a = 20;
    int *ptr = &a;
    int **pptr = &ptr;

    **pptr = 50;

    printf("Updated value = %d", a);

    return 0;
}