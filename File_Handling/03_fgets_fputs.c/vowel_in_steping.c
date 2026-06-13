/* Display only vowels from a sentence and write them to a file using fputs() */

#include <stdio.h>

int main()
{
    char str[100], vowels[100];
    int i, j = 0;
    FILE *fp;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U')
        {
            vowels[j++] = str[i];
        }
    }

    vowels[j] = '\0';

    fp = fopen("vowels.txt", "w");

    if (fp == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }

    fputs(vowels, fp);

    fclose(fp);

    printf("Vowels written to file successfully.");

    return 0;
}