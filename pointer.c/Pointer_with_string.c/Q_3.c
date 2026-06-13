/* Q3. Write a C program to convert a string to uppercase using pointer. */

#include <stdio.h>

int main()
{
    char str[100];
    char *ptr;

    printf("Enter a string: ");
    scanf("%s", str);

    ptr = str;

    while(*ptr != '\0')
    {
        if(*ptr >= 'a' && *ptr <= 'z')
            *ptr = *ptr - 32;

        ptr++;
    }

    printf("Uppercase string = %s", str);

    return 0;
}