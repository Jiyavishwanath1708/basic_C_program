/* Q5. Write a C program to reverse a string using pointer. */

#include <stdio.h>

int main()
{
    char str[100];
    char *ptr;
    int length = 0, i;

    printf("Enter a string: ");
    scanf("%s", str);

    ptr = str;

    while(*(ptr + length) != '\0')
    {
        length++;
    }

    printf("Reversed string = ");

    for(i = length - 1; i >= 0; i--)
    {
        printf("%c", *(ptr + i));
    }

    return 0;
}