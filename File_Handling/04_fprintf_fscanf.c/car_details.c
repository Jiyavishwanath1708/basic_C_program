/* Write car details and display cars manufactured before 2015 */

#include <stdio.h>

int main()
{
    FILE *fp;
    int n, i, carId, year;
    char carName[20];

    printf("Enter number of cars: ");
    scanf("%d", &n);

    fp = fopen("car.txt", "w");

    if (fp == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }

    for (i = 1; i <= n; i++)
    {
        printf("\nEnter Car ID, Car Name and Manufacturing Year of Car %d: ", i);
        scanf("%d %s %d", &carId, carName, &year);

        fprintf(fp, "%d %s %d\n", carId, carName, year);
    }

    fclose(fp);

    fp = fopen("car.txt", "r");

    if (fp == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }

    printf("\nCars manufactured before 2015:\n");

    while (fscanf(fp, "%d %s %d", &carId, carName, &year) != EOF)
    {
        if (year < 2015)
        {
            printf("Car ID = %d\n", carId);
            printf("Car Name = %s\n", carName);
            printf("Manufacturing Year = %d\n\n", year);
        }
    }

    fclose(fp);

    return 0;
}