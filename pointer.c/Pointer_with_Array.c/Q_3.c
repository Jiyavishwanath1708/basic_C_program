/* Q8. Write a C program to find maximum element in an array using pointer. */

#include <stdio.h>

int main()
{
    int arr[5], i, max;
    int *ptr = arr;

    printf("Enter 5 elements: ");
    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    max = *ptr;

    for(i = 1; i < 5; i++)
    {
        if(*(ptr + i) > max)
            max = *(ptr + i);
    }

    printf("Maximum element = %d", max);

    return 0;
}