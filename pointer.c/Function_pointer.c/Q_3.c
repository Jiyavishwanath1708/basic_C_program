/* Q3. Write a C program to perform subtraction using a function pointer. */

#include <stdio.h>

int sub(int a, int b)
{
    return a - b;
}

int main()
{
    int (*ptr)(int, int);

    ptr = sub;

    printf("Difference = %d", ptr(20, 10));

    return 0;
}