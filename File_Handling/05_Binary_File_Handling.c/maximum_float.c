/* Find maximum float number from a binary file */

#include <stdio.h>

int main()
{
    FILE *fp;
    int n, i;
    float num, max;

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

    fread(&max, sizeof(float), 1, fp);

    while (fread(&num, sizeof(float), 1, fp) == 1)
    {
        if (num > max)
            max = num;
    }

    printf("Maximum number = %.2f", max);

    fclose(fp);

    return 0;
}