/* Q4. Write a C program to swap two pointer variables using pointer to pointer. */

#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    int *p1 = &a, *p2 = &b, *temp;
    int **pp1 = &p1, **pp2 = &p2;

    temp = *pp1;
    *pp1 = *pp2;
    *pp2 = temp;

    printf("*p1 = %d\n", *p1);
    printf("*p2 = %d\n", *p2);

    return 0;
}