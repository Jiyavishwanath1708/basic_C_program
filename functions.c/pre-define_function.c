/* 
Function
--------
A function is a block of code which only runs when it is called.

Predefined Function (Library Function)
--------------------------------------
Predefined functions, also known as library functions, which are functions which are already defined in a system library.
*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    int choice;
    char str1[100], str2[100], ch;

    do
    {
        printf("\n===== PREDEFINED FUNCTIONS MENU =====\n");
        printf("1. Square Root (sqrt)\n");
        printf("2. Power (pow)\n");
        printf("3. Absolute Value (abs)\n");
        printf("4. String Length (strlen)\n");
        printf("5. String Copy (strcpy)\n");
        printf("6. String Compare (strcmp)\n");
        printf("7. Convert to Uppercase (toupper)\n");
        printf("8. Convert to Lowercase (tolower)\n");
        printf("9. String Concatenation (strcat)\n");
        printf("10. Exit\n");
       

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            double num;
            printf("Enter a number: ");
            scanf("%lf", &num);

            // sqrt() returns square root
            printf("Square Root = %.2lf\n", sqrt(num));
            break;
        }

        case 2:
        {
            double base, exponent;
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &base, &exponent);

            // pow() calculates base^exponent
            printf("Result = %.2lf\n", pow(base, exponent));
            break;
        }

        case 3:
        {
            int num;
            printf("Enter an integer: ");
            scanf("%d", &num);

            // abs() returns absolute value
            printf("Absolute Value = %d\n", abs(num));
            break;
        }

        case 4:
        {
            printf("Enter a string: ");
            scanf(" %[^\n]", str1);

            // strlen() returns length of string
            printf("Length = %lu\n", strlen(str1));
            break;
        }

        case 5:
        {
            printf("Enter a string: ");
            scanf(" %[^\n]", str1);

            // strcpy() copies one string into another
            strcpy(str2, str1);

            printf("Copied String = %s\n", str2);
            break;
        }

        case 6:
        {
            printf("Enter first string: ");
            scanf(" %[^\n]", str1);

            printf("Enter second string: ");
            scanf(" %[^\n]", str2);

            // strcmp() compares two strings
            if (strcmp(str1, str2) == 0)
                printf("Strings are equal.\n");
            else
                printf("Strings are not equal.\n");

            break;
        }

        case 7:
        {
            printf("Enter a character: ");
            scanf(" %c", &ch);

            // toupper() converts character to uppercase
            printf("Uppercase Character = %c\n", toupper(ch));
            break;
        }

        case 8:
        {
            printf("Enter a character: ");
            scanf(" %c", &ch);

            // tolower() converts character to lowercase
            printf("Lowercase Character = %c\n", tolower(ch));
            break;
        }

        case 9:
        {
            printf("Enter first string: ");
            scanf(" %[^\n]", str1);

            printf("Enter second string: ");
            scanf(" %[^\n]", str2);

            // strcat() appends second string to first string
            strcat(str1, str2);

            printf("Concatenated String = %s\n", str1);
            break;
        }
        case 10:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice!\n");
        }

    } while (choice != 9);

    return 0;
}