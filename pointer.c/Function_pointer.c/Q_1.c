/* Q1. Write a C program to call a function using a function pointer. */

#include <stdio.h>

void display()
{
    printf("Hello World");
}

int main()
{
    void (*ptr)();

    ptr = display;

    ptr();

    return 0;
}