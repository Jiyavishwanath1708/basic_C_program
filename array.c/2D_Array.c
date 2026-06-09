#include <stdio.h>

int main()
{
    int arr[10][10];
    int rows, cols;
    int i, j, choice;
    int row, col, value;
    int max, min, sum;
    float avg;

    /*
    ==========================================
            2D ARRAY CONCEPTS IN C
    ==========================================

    2D Array Declaration:
    int arr[3][3];

    Initialization With Size:
    int arr[2][2] = {{1,2},{3,4}};

    Initialization Without Size:
    int arr[][2] = {{1,2},{3,4}}; 
    */

    printf("Enter Number of Rows: ");
    scanf("%d", &rows);

    printf("Enter Number of Columns: ");
    scanf("%d", &cols);

    printf("Enter %d Elements:\n", rows * cols);

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    do
    {
        printf("\n====== 2D ARRAY MENU ======\n");
        printf("1. Display Matrix\n");
        printf("2. Access Element\n");
        printf("3. Update Element\n");
        printf("4. Traverse Matrix\n");
        printf("5. Find Maximum\n");
        printf("6. Find Minimum\n");
        printf("7. Find Sum\n");
        printf("8. Find Average\n");
        printf("9. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nMatrix:\n");

                for(i = 0; i < rows; i++)
                {
                    for(j = 0; j < cols; j++)
                    {
                        printf("%4d", arr[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 2:
                printf("Enter Row Index: ");
                scanf("%d", &row);

                printf("Enter Column Index: ");
                scanf("%d", &col);

                if(row >= 0 && row < rows &&
                   col >= 0 && col < cols)
                {
                    printf("Element = %d\n",
                           arr[row][col]);
                }
                else
                {
                    printf("Invalid Position!\n");
                }
                /*int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} }; printf("%d", matrix[0][2]);*/ // short way
                break;

            case 3:
                printf("Enter Row Index: ");
                scanf("%d", &row);

                printf("Enter Column Index: ");
                scanf("%d", &col);

                if(row >= 0 && row < rows &&
                   col >= 0 && col < cols)
                {
                    printf("Enter New Value: ");
                    scanf("%d", &value);

                    arr[row][col] = value;

                    printf("Element Updated Successfully.\n");
                }
                else
                {
                    printf("Invalid Position!\n");
                }
                break;

            case 4:
                printf("\nMatrix Traversal:\n");

                for(i = 0; i < rows; i++)
                {
                    for(j = 0; j < cols; j++)
                    {
                        printf("arr[%d][%d] = %d\n",
                               i, j, arr[i][j]);
                    }
                }
                break;

            case 5:
                max = arr[0][0];

                for(i = 0; i < rows; i++)
                {
                    for(j = 0; j < cols; j++)
                    {
                        if(arr[i][j] > max)
                            max = arr[i][j];
                    }
                }

                printf("Maximum Element = %d\n", max);
                break;

            case 6:
                min = arr[0][0];

                for(i = 0; i < rows; i++)
                {
                    for(j = 0; j < cols; j++)
                    {
                        if(arr[i][j] < min)
                            min = arr[i][j];
                    }
                }

                printf("Minimum Element = %d\n", min);
                break;

            case 7:
                sum = 0;

                for(i = 0; i < rows; i++)
                {
                    for(j = 0; j < cols; j++)
                    {
                        sum += arr[i][j];
                    }
                }

                printf("Sum = %d\n", sum);
                break;

            case 8:
                sum = 0;

                for(i = 0; i < rows; i++)
                {
                    for(j = 0; j < cols; j++)
                    {
                        sum += arr[i][j];
                    }
                }

                avg = (float)sum / (rows * cols);

                printf("Average = %.2f\n", avg);
                break;

            case 9:
                printf("Program Terminated.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 9);

    return 0;
}