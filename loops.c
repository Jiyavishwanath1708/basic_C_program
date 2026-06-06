#include <stdio.h>

int main()
{
    int choice, i, j;

    do
    {
        printf("\n===== LOOP MENU =====\n");
        printf("1. For Loop\n");
        printf("2. While Loop\n");
        printf("3. Do While Loop\n");
        printf("4. Nested Loop\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nFor Loop Example:\n");
                for(i=5; i>=0; i--)
                {
                    printf("%d ", i);
                }
                printf("\n");
                break;

            case 2:
                printf("\nWhile Loop Example:\n");
                i=1;
                while(i<=5)
                {
                    printf("%d ", i);
                    i++;
                }
                printf("\n");
                break;

            case 3:
                printf("\nDo While Loop Example:\n");
                i=0;
                do
                {
                    printf("%d ", i);
                    i++;
                }
                while(i<=5);
                printf("\n");
                break;

            case 4:
                printf("\nNested Loop Example:\n");
                for(i=1; i<=5; i++)
                {
                    for(j=1; j<=i; j++)
                    {
                        printf("* ");
                    }
                    printf("\n");
                }
                break;

            case 5:
                printf("Program Ended.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}