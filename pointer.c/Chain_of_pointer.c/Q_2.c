/* Q2. Write a C program to display addresses using pointer to pointer. */

#include <stdio.h>

int main()
{
    int a = 100;
    int *ptr = &a;
    int **pptr = &ptr;

    printf("Address of a = %p\n", &a);
    printf("Value of ptr = %p\n", ptr);
    printf("Address of ptr = %p\n", &ptr);
    printf("Value of pptr = %p\n", pptr);

    return 0;
}