/* Create a text file and write data into it */

#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("sample.txt", "w");

    if (fp == NULL)
    {
        printf("File could not be created.");
        return 1;
    }

    fprintf(fp, "Welcome to File Handling in C.");

    fclose(fp);

    printf("File created successfully.");

    return 0;
}