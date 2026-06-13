/* Q5. Write a C program to find the longest string using an array of pointers. */

#include <stdio.h>
#include <string.h>

int main()
{
    char *str[] = {"Apple", "Banana", "Mango", "Watermelon"};

    int i, max = 0;

    for(i = 1; i < 4; i++)
    {
        if(strlen(str[i]) > strlen(str[max]))
            max = i;
    }

    printf("Longest string = %s", str[max]);

    return 0;
}