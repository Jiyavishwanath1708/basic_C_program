/* Q6. Write a C program to display all elements of an array using pointer. */

#include <stdio.h>

int main()
{
    int arr[5], i;
    int *ptr = arr;

    printf("Enter 5 elements: ");
    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Array elements are:\n");
    for(i = 0; i < 5; i++)
        printf("%d ", *(ptr + i));

    return 0;
}