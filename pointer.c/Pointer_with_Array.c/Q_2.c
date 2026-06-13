/* Q7. Write a C program to find sum of array elements using pointer. */

#include <stdio.h>

int main()
{
    int arr[5], i, sum = 0;
    int *ptr = arr;

    printf("Enter 5 elements: ");
    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < 5; i++)
        sum += *(ptr + i);

    printf("Sum = %d", sum);

    return 0;
}