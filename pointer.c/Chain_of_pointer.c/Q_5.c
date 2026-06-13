/* Q5. Write a C program to demonstrate triple pointer. */

#include <stdio.h>

int main()
{
    int a = 25;
    int *ptr = &a;
    int **pptr = &ptr;
    int ***tptr = &pptr;

    printf("Value of a = %d\n", a);
    printf("Using ptr = %d\n", *ptr);
    printf("Using pptr = %d\n", **pptr);
    printf("Using tptr = %d\n", ***tptr);

    return 0;
}