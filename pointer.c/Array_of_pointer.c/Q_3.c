/* Q3. Write a C program to display strings using an array of pointers. */

#include <stdio.h>

int main()
{
    char *names[] = {"Ram", "Shyam", "Mohan", "Ravi"};

    int i;

    for(i = 0; i < 4; i++)
        printf("%s\n", names[i]);

    return 0;
}