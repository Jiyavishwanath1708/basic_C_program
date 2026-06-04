#include <stdio.h>

int main()
{
    int ch, i, j, n = 5,choice;
do{ 
    printf("\n===== PATTERN MENU =====\n");
    printf("1. Right Triangle\n");
    printf("2. Inverted Right Triangle\n");
    printf("3. Pyramid\n");
    printf("4. Inverted Pyramid\n");
    printf("5. Diamond\n");
    printf("6. Hollow Square\n");
    printf("7. Plus Pattern\n");
    printf("8. X Pattern\n");
    printf("9. Hollow Diamond\n");
    printf("10. Arrow\n");
    printf("11. Heart\n");
    printf("12. Cross\n");
    printf("13. Hollow Pyramid\n");
    printf("14. Right Arrow\n");
    printf("15. Left Arrow\n");
    printf("16. Sandglass\n");
    printf("17. Triangle Numbers with Stars\n");
    printf("18. Star Border\n");
    printf("19. Star Staircase\n");
    printf("20. Pyramid with Spaces\n");
    printf("0.Exit");

    printf("\nEnter Choice: ");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1: // Right Triangle
            for(i=1;i<=5;i++)
            {
                for(j=1;j<=i;j++)
                    printf("*");
                printf("\n");
            }
            break;

        case 2: // Inverted Right Triangle
            for(i=5;i>=1;i--)
            {
                for(j=1;j<=i;j++)
                    printf("*");
                printf("\n");
            }
            break;

        case 3: // Pyramid
            for(i=1;i<=5;i++)
            {
                for(j=1;j<=5-i;j++) printf(" ");
                for(j=1;j<=2*i-1;j++) printf("*");
                printf("\n");
            }
            break;

        case 4: // Inverted Pyramid
            for(i=5;i>=1;i--)
            {
                for(j=1;j<=5-i;j++) printf(" ");
                for(j=1;j<=2*i-1;j++) printf("*");
                printf("\n");
            }
            break;

        case 5: // Diamond
            for(i=1;i<=5;i++)
            {
                for(j=1;j<=5-i;j++) printf(" ");
                for(j=1;j<=2*i-1;j++) printf("*");
                printf("\n");
            }
            for(i=4;i>=1;i--)
            {
                for(j=1;j<=5-i;j++) printf(" ");
                for(j=1;j<=2*i-1;j++) printf("*");
                printf("\n");
            }
            break;

        case 6: // Hollow Square
            for(i=1;i<=5;i++)
            {
                for(j=1;j<=5;j++)
                {
                    if(i==1||i==5||j==1||j==5)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;

        case 7: // Plus
            for(i=1;i<=5;i++)
            {
                for(j=1;j<=5;j++)
                {
                    if(i==3||j==3)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;

        case 8: // X Pattern
            for(i=1;i<=5;i++)
            {
                for(j=1;j<=5;j++)
                {
                    if(i==j||i+j==6)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;

        case 9: // Hollow Diamond
            for(i=1;i<=5;i++)
            {
                for(j=1;j<=5-i;j++) printf(" ");
                for(j=1;j<=2*i-1;j++)
                    if(j==1||j==2*i-1) printf("*");
                    else printf(" ");
                printf("\n");
            }
            for(i=4;i>=1;i--)
            {
                for(j=1;j<=5-i;j++) printf(" ");
                for(j=1;j<=2*i-1;j++)
                    if(j==1||j==2*i-1) printf("*");
                    else printf(" ");
                printf("\n");
            }
            break;

        case 10: // Arrow
      for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n - i; j++)
            printf(" ");

        for(j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }

    // Arrow Tail
    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= n - 1; j++)
            printf(" ");

        printf("*\n");
    }
            break;

        case 11: // Heart
     for(i = n/2; i <= n; i += 2)
    {
        for(j = 1; j < n - i; j += 2)
            printf(" ");

        for(j = 1; j <= i; j++)
            printf("*");

        for(j = 1; j <= n - i; j++)
            printf(" ");

        for(j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    // Lower part
    for(i = n; i >= 1; i--)
    {
        for(j = i; j < n; j++)
            printf(" ");

        for(j = 1; j <= (i * 2) - 1; j++)
            printf("*");

        printf("\n");
    }
            break;

        case 12: // Cross
            for(i=1;i<=5;i++)
            {
                for(j=1;j<=5;j++)
                {
                    if(i==j||i+j==6)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;

        case 13: // Hollow Pyramid
            for(i=1;i<=5;i++)
            {
                for(j=1;j<=5-i;j++) printf(" ");
                for(j=1;j<=2*i-1;j++)
                {
                    if(i==5||j==1||j==2*i-1)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;

        case 14: // Right Arrow
            for(i=1;i<=3;i++)
            {
                for(j=1;j<=2*i-1;j++) printf("*");
                printf("\n");
            }
            for(i=2;i>=1;i--)
            {
                for(j=1;j<=2*i-1;j++) printf("*");
                printf("\n");
            }
            break;

        case 15: // Left Arrow
            for(i=1;i<=3;i++)
            {
                for(j=1;j<=3-i;j++) printf(" ");
                for(j=1;j<=2*i-1;j++) printf("*");
                printf("\n");
            }
            for(i=2;i>=1;i--)
            {
                for(j=1;j<=3-i;j++) printf(" ");
                for(j=1;j<=2*i-1;j++) printf("*");
                printf("\n");
            }
            break;

        case 16: // Sandglass
            for(i=5;i>=1;i--)
            {
                for(j=1;j<=2*i-1;j++) printf("*");
                printf("\n");
            }
            for(i=2;i<=5;i++)
            {
                for(j=1;j<=2*i-1;j++) printf("*");
                printf("\n");
            }
            break;

        case 17: // Triangle Stars
            for(i=1;i<=5;i++)
            {
                for(j=1;j<=i;j++)
                    printf("* ");
                printf("\n");
            }
            break;

        case 18: // Star Border
            for(i=1;i<=5;i++)
            {
                for(j=1;j<=5;j++)
                {
                    if(i==1||i==5||j==1||j==5)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;

        case 19: // Star Staircase
            for(i=1;i<=5;i++)
            {
                for(j=1;j<=i;j++)
                    printf("*");
                printf("\n");
            }
            for(i=4;i>=1;i--)
            { 
                for(j=1;j<=i;j++)
                    printf("*");
                printf("\n");
            }
            break;

        case 20: // Pyramid with spaces
            for(i=1;i<=5;i++)
            {
                for(j=1;j<=i;j++)
                    printf("* ");
                printf("\n");
            }
            
            break;

        default:
            printf("Invalid Choice!");
            
    }
    printf("do you want to explore more??....(0 OR 1)\n");
            scanf("%d",&choice);
}while(choice !=0);

    return 0;
}
 