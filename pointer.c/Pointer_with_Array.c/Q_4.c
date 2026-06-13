/* Q9. Write a C program to count even and odd numbers in an array using pointer. */

#include <stdio.h>

int main()
{
    int arr[5], i;
    int even = 0, odd = 0;
    int *ptr = arr;

    printf("Enter 5 elements: ");
    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < 5; i++)
    {
        if(*(ptr + i) % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d", odd);

    return 0;
}