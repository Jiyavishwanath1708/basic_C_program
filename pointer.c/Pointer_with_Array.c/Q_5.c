/* Q10. Write a C program to multiply each element of an array by 2 using pointer. */

#include <stdio.h>

int main()
{
    int arr[5], i;
    int *ptr = arr;

    printf("Enter 5 elements: ");
    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < 5; i++)
        *(ptr + i) = *(ptr + i) * 2;

    printf("Updated array:\n");
    for(i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}