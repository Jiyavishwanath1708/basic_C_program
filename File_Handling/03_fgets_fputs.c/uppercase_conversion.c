/* Convert lowercase letters to uppercase, write to file using fputs(),
   then read back using fgets() and display */

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    FILE *fp;
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        str[i] = toupper(str[i]);
    }

    fp = fopen("uppercase.txt", "w");

    if (fp == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }

    fputs(str, fp);
    fclose(fp);

    fp = fopen("uppercase.txt", "r");

    if (fp == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }

    fgets(str, sizeof(str), fp);

    printf("String from file: %s", str);

    fclose(fp);

    return 0;
}