#include <stdio.h>

int main()
{
    int ch, i, j, k, n = 5, num;

    do
    {
        printf("\n\n===== NUMBER PATTERN MENU =====");
        printf("\n1. Right Triangle");
        printf("\n2. Inverted Right Triangle");
        printf("\n3. Number Pyramid");
        printf("\n4. Number Square");
        printf("\n5. Reverse Number Square");
        printf("\n6. Hollow Number Square");
        printf("\n7. Number Diamond");
        printf("\n8. Number Triangle");
        printf("\n9. Reverse Number Triangle");
        printf("\n10. Number Cross");
        printf("\n11. Number X");
        printf("\n12. Number Heart");
        printf("\n13. Floyd's Triangle");
        printf("\n14. Number Spiral");
        printf("\n15. Number Staircase");
        printf("\n16. Number Zigzag");
        printf("\n17. Number Border");
        printf("\n18. Number Arrow");
        printf("\n19. Pascal-like Triangle");
        printf("\n20. Hollow Number Diamond");
        printf("\n0. Exit");
        printf("\nEnter Choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                for(i=1;i<=5;i++)
                {
                    for(j=1;j<=i;j++)
                        printf("%d",i);
                    printf("\n");
                }
                break;

            case 2:
                for(i=5;i>=1;i--)
                {
                    for(j=1;j<=i;j++)
                        printf("%d",i);
                    printf("\n");
                }
                break;

            case 3:
                for(i=1;i<=5;i++)
                {
                    for(j=1;j<=2*i-1;j++)
                        printf("%d",i);
                    printf("\n");
                }
                break;

            case 4:
                for(i=1;i<=5;i++)
                {
                    for(j=1;j<=5;j++)
                        printf("%d",j);
                    printf("\n");
                }
                break;

            case 5:
                for(i=1;i<=5;i++)
                {
                    for(j=5;j>=1;j--)
                        printf("%d",j);
                    printf("\n");
                }
                break;

            case 6:
                for(i=1;i<=5;i++)
                {
                    for(j=1;j<=5;j++)
                    {
                        if(i==1 || i==5 || j==1 || j==5)
                            printf("%d",i);
                        else
                            printf(" ");
                    }
                    printf("\n");
                }
                break;

            case 7:
                for(i=1;i<=5;i++)
                {
                    for(j=1;j<=i*2-1;j++)
                        printf("%d",j);
                    printf("\n");
                }
                for(i=4;i>=1;i--)
                {
                    for(j=1;j<=i*2-1;j++)
                        printf("%d",j);
                    printf("\n");
                }
                break;

            case 8:
                for(i=1;i<=5;i++)
                {
                    for(j=1;j<=i;j++)
                        printf("%d",j);
                    printf("\n");
                }
                break;

            case 9:
                for(i=5;i>=1;i--)
                {
                    for(j=1;j<=i;j++)
                        printf("%d",j);
                    printf("\n");
                }
                break;

            case 10:
                for(i=1;i<=5;i++)
                {
                    for(j=1;j<=5;j++)
                    {
                        if(j==i || j==6-i)
                            printf("%d",i);
                        else
                            printf(" ");
                    }
                    printf("\n");
                }
                break;

            case 11:
                for(i=1;i<=5;i++)
                {
                    for(j=1;j<=5;j++)
                    {
                        if(j==i)
                            printf("%d",i);
                        else if(j==6-i)
                            printf("%d",6-i);
                        else
                            printf(" ");
                    }
                    printf("\n");
                }
                break;

            case 12:
                for(i=1;i<=4;i++)
                {
                    for(j=1;j<=i;j++)
                        printf("%d",j);

                    for(j=1;j<=8-2*i;j++)
                        printf(" ");

                    for(j=i;j>=1;j--)
                        printf("%d",j);

                    printf("\n");
                }
                for(j=1;j<=4;j++)
                    printf("%d",j);
                for(j=3;j>=1;j--)
                    printf("%d",j);
                printf("\n");
                break;

            case 13:
                num=1;
                for(i=1;i<=5;i++)
                {
                    for(j=1;j<=i;j++)
                        printf("%d ",num++);
                    printf("\n");
                }
                break;

            case 14:
                for(i=1;i<=5;i++)
                {
                    for(j=1;j<=5;j++)
                    {
                        if(i==1 || i==5)
                            printf("%d",i);
                        else if(j==1)
                            printf("%d",i);
                        else
                            printf(" ");
                    }
                    printf("\n");
                }
                break;

            case 15:
                for(i=1;i<=5;i++)
                {
                    for(j=1;j<=i;j++)
                        printf("%d",i);
                    printf("\n");
                }

                for(i=4;i>=1;i--)
                {
                    for(j=1;j<=i;j++)
                        printf("%d",i);
                    printf("\n");
                }
                break;

            case 16:
                for(i=1;i<=5;i++)
                {
                    for(j=1;j<=3;j++)
                        printf("%d ",i+2*(j-1));
                    printf("\n");
                }
                break;

            case 17:
                for(i=1;i<=5;i++)
                {
                    for(j=1;j<=5;j++)
                    {
                        if(i==1 || i==5 || j==1 || j==5)
                            printf("%d",i);
                        else
                            printf(" ");
                    }
                    printf("\n");
                }
                break;

            case 18:
                num=1;

                for(i=1;i<=3;i++)
                {
                    for(j=1;j<=2*i-1;j++)
                            printf("%d",num++);
                    printf("\n");
                }

                num=2;
                for(i=2;i>=1;i--)
                {
                    for(j=1;j<=2*i-1;j++)
                        printf("%d",num++);
                    printf("\n");
                }
                break;

            case 19:
                for(i=0;i<5;i++)
                {
                    int val=1;
                    for(j=0;j<=i;j++)
                    {
                        printf("%d ",val);
                        val=val*(i-j)/(j+1);
                    }
                    printf("\n");
                }
                break;

            case 20:
                for(i=1;i<=5;i++)
                {
                    for(j=1;j<=5-i;j++)
                        printf(" ");

                    printf("%d",i);

                    if(i!=1)
                    {
                        for(j=1;j<=2*i-3;j++)
                            printf(" ");

                        printf("%d",i);
                    }
                    printf("\n");
                }

                for(i=4;i>=1;i--)
                {
                    for(j=1;j<=5-i;j++)
                        printf(" ");

                    printf("%d",i);

                    if(i!=1)
                    {
                        for(j=1;j<=2*i-3;j++)
                            printf(" ");

                        printf("%d",i);
                    }
                    printf("\n");
                }
                break;

            case 0:
                printf("\nProgram Ended.");
                break;

            default:
                printf("\nInvalid Choice!");
        }

    } while(ch!=0);

    return 0;
}