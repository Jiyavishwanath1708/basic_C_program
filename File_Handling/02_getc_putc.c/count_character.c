/* Count uppercase, lowercase, digits and special characters using getc() */

#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char ch;
    int upper = 0, lower = 0, digit = 0, special = 0;

    fp = fopen("sample.txt", "r");

    if (fp == NULL)
    {
        printf("File not found.");
        return 1;
    }

    while ((ch = getc(fp)) != EOF)
    {
        if (isupper(ch))
            upper++;
        else if (islower(ch))
            lower++;
        else if (isdigit(ch))
            digit++;
        else
            special++;
    }

    fclose(fp);

    printf("Uppercase letters = %d\n", upper);
    printf("Lowercase letters = %d\n", lower);
    printf("Digits = %d\n", digit);
    printf("Special characters = %d\n", special);

    return 0;
}