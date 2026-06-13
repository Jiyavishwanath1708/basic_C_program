/* Q4. Write a C program to find the maximum of two numbers using a function pointer. */

#include <stdio.h>

int max(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    int (*ptr)(int, int);

    ptr = max;

    printf("Maximum = %d", ptr(15, 25));

    return 0;
}