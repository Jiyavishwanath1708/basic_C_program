/* Q2. Write a C program to input and display array elements using an array of pointers. */

#include <stdio.h>

int main()
{
    int arr[5], *ptr[5];
    int i;

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        ptr[i] = &arr[i];
    }

    for(i = 0; i < 5; i++)
        printf("%d ", *ptr[i]);

    return 0;
}