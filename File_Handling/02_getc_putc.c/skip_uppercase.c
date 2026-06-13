/* Skip uppercase letters while reading a file using getc() */

#include <stdio.h>
#include <ctype.h>

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

    printf("Contents of file (excluding uppercase letters):\n");

    while ((ch = getc(fp)) != EOF)
    {
        if (!isupper(ch))
            putchar(ch);
    }

    fclose(fp);

    return 0;
}