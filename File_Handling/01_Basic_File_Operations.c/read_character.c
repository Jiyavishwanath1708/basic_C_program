/* Read a single character from a file using getc() */

#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("sample.txt", "r");

    if (fp == NULL)
    {
        printf("File not found.");
        return 1;
    }

    ch = getc(fp);

    printf("Character read from file: %c", ch);

    fclose(fp);

    return 0;
}