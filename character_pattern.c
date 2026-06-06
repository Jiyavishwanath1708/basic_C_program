#include <stdio.h>

int main()
{
    int ch,i,j,k;
    char c;

    do
    {
        printf("\n===== CHARACTER PATTERN MENU =====\n");
        printf("1. Right Triangle\n");
        printf("2. Inverted Right Triangle\n");
        printf("3. Pyramid\n");
        printf("4. Alphabet Square\n");
        printf("5. Reverse Alphabet Square\n");
        printf("6. Hollow Alphabet Square\n");
        printf("7. Alphabet Diamond\n");
        printf("8. Alphabet Triangle\n");
        printf("9. Reverse Alphabet Triangle\n");
        printf("10. Alphabet Cross\n");
        printf("11. Alphabet X\n");
        printf("12. Alphabet Pyramid Numbers\n");
        printf("13. Alphabet Spiral\n");
        printf("14. Alphabet Staircase\n");
        printf("15. Alphabet Border\n");
        printf("16. Alphabet Pattern\n");
        printf("17. Alphabet Diamond Hollow\n");
        printf("0. Exit\n");

        printf("Enter choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            for(i=0;i<5;i++)
            {
                for(j=0;j<=i;j++)
                    printf("%c",'A'+i);
                printf("\n");
            }
            break;

        case 2:
            for(i=4;i>=0;i--)
            {
                for(j=0;j<=i;j++)
                    printf("%c",'A'+i);
                printf("\n");
            }
            break;

       case 3:
            for(i=0; i<5; i++)
        {
            for(j=0; j<5-i-1; j++)
                printf(" ");

            for(j=0; j<2*i+1; j++)
                printf("%c",'A'+i);

            printf("\n");
        }
break;

        case 4:
            for(i=0;i<5;i++)
            {
                for(j=0;j<5;j++)
                    printf("%c",'A'+j);
                printf("\n");
            }
            break;

        case 5:
            for(i=0;i<5;i++)
            {
                for(j=4;j>=0;j--)
                    printf("%c",'A'+j);
                printf("\n");
            }
            break;

        case 6:
            for(i=0;i<5;i++)
            {
                for(j=0;j<5;j++)
                {
                    if(i==0)
                        printf("A");
                    else if(i==4)
                        printf("E");
                    else if(j==0)
                        printf("A");
                    else if(j==4)
                        printf("%c",'A'+i);
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;

        case 7:
            {
                int n = 5;

                for(i=1; i<=n; i++)
                {
                    for(j=1; j<=n-i; j++)
                        printf(" ");

                    for(j=0; j<2*i-1; j++)
                        printf("%c",'A'+j);

                    printf("\n");
                }

                for(i=n-1; i>=1; i--)
                {
                    for(j=1; j<=n-i; j++)
                        printf(" ");

                    for(j=0; j<2*i-1; j++)
                        printf("%c",'A'+j);

                    printf("\n");
                }
            }
            break;

        case 8:
            for(i=1;i<=5;i++)
            {
                for(j=0;j<i;j++)
                    printf("%c",'A'+j);
                printf("\n");
            }
            break;

        case 9:
            for(i=5;i>=1;i--)
            {
                for(j=0;j<i;j++)
                    printf("%c",'A'+j);
                printf("\n");
            }
            break;

        case 10:
            for(i=0;i<5;i++)
            {
                for(j=0;j<5;j++)
                {
                    if(j==i || j==4-i)
                        printf("%c",'A'+i);
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;

        case 11:
            for(i=0;i<5;i++)
            {
                for(j=0;j<5;j++)
                {
                    if(j==i || j==4-i)
                        printf("%c",'A'+j);
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;

        case 12:
            {
                char ch='A';

                for(i=1; i<=5; i++)
                {
                    for(j=1; j<=5-i; j++)
                        printf(" ");

                    for(j=1; j<=i; j++)
                    {
                        printf("%c ", ch);
                        ch++;
                    }

                    printf("\n");
                }
            }
            break;

    case 13:
            {
                char a[5][5];
                int top=0, bottom=4, left=0, right=4;
                char ch='A';

                while(top<=bottom && left<=right)
                {
                    for(i=left; i<=right; i++)
                        a[top][i]=ch++;
                    top++;

                    for(i=top; i<=bottom; i++)
                        a[i][right]=ch++;
                    right--;

                    for(i=right; i>=left; i--)
                        a[bottom][i]=ch++;
                    bottom--;

                    for(i=bottom; i>=top; i--)
                        a[i][left]=ch++;
                    left++;
                }

                for(i=0; i<5; i++)
                {
                    for(j=0; j<5; j++)
                        printf("%c ", a[i][j]);
                    printf("\n");
                }
            }
            break;

        case 14:
            for(i=1;i<=5;i++)
            {
                for(j=1;j<=i;j++)
                    printf("%c",'A'+i-1);
                printf("\n");
            }
            for(i=4;i>=1;i--)
            {
                for(j=1;j<=i;j++)
                    printf("%c",'A'+i-1);
                printf("\n");
            }
            break;

        case 15:
            for(i=0;i<5;i++)
            {
                for(j=0;j<5;j++)
                {
                    if(i==0 || i==4 || j==0 || j==4)
                        printf("%c",'A'+i);
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;

        case 16:
            c='A';
            for(i=1;i<=5;i++)
            {
                for(j=1;j<=i;j++)
                    printf("%c",c++);
                printf("\n");
            }
            break;

        case 17:
            c='A';
            for(i=1;i<=5;i++)
            {
                for(j=1;j<=5-i;j++)
                    printf(" ");

                printf("%c",c++);

                if(i>1)
                {
                    for(j=1;j<=2*i-3;j++)
                        printf(" ");
                    printf("%c",c++);
                }
                printf("\n");
            }

            for(i=4;i>=1;i--)
            {
                for(j=1;j<=5-i;j++)
                    printf(" ");

                c-=2;
                printf("%c",c);

                if(i>1)
                {
                    for(j=1;j<=2*i-3;j++)
                        printf(" ");
                    printf("%c",c+1);
                }
                printf("\n");
            }
            break;

        case 0:
            printf("Program Ended.\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while(ch!=0);

    return 0;
}