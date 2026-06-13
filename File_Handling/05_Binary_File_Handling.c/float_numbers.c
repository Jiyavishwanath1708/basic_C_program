/* Store and read float numbers using binary files */

#include <stdio.h>

int main()
{
    FILE *fp;
    int n, i;
    float num;

    printf("Enter number of float values: ");
    scanf("%d", &n);

    fp = fopen("float.dat", "wb");

    for (i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &num);
        fwrite(&num, sizeof(float), 1, fp);
    }

    fclose(fp);

    fp = fopen("float.dat", "rb");

    printf("\nNumbers stored in file are:\n");

    while (fread(&num, sizeof(float), 1, fp) == 1)
    {
        printf("%.2f\n", num);
    }

    fclose(fp);

    return 0;
}