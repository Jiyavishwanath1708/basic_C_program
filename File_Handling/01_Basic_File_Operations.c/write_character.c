/* Write a single character into a file using putc() */

#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    fp = fopen("sample.txt", "w");

    if (fp == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }

    putc(ch, fp);

    fclose(fp);

    printf("Character written to file successfully.");

    return 0;
}