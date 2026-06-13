/* Q4. Write a C program to find the largest number using an array of pointers. */

#include <stdio.h>

int main()
{
    int a = 15, b = 35, c = 25;
    int *ptr[3] = {&a, &b, &c};

    int i, max = *ptr[0];

    for(i = 1; i < 3; i++)
    {
        if(*ptr[i] > max)
            max = *ptr[i];
    }

    printf("Maximum = %d", max);

    return 0;
}