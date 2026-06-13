/* Q1. Write a C program to display values using an array of integer pointers. */

#include <stdio.h>

int main()
{
    int a = 10, b = 20, c = 30;
    int *ptr[3] = {&a, &b, &c};

    int i;

    for(i = 0; i < 3; i++)
        printf("%d ", *ptr[i]);

    return 0;
}