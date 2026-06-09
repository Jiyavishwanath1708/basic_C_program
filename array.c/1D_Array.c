#include <stdio.h>

int main()
{
    int arr[100], n, i, choice, pos, value;
    int max, min, sum;

    /* Array Declaration
       int arr[100];
    */

    /* Array Initialization - Method 1 (With Size)
       int a[5] = {10, 20, 30, 40, 50};
    */

    /* Array Initialization - Method 2 (Without Size)
       int b[] = {1, 2, 3, 4, 5};
    */

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n===== 1D ARRAY MENU =====\n");
        printf("1. Display Array\n");
        printf("2. Access Element(using index)\n");
        printf("3. Update Element\n");
        printf("4. Traverse Array\n");
        printf("5. Find Maximum\n");
        printf("6. Find Minimum\n");
        printf("7. Find Sum\n");
        printf("8. Find Average\n");
        printf("9. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Array Elements: ");
                for(i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 2:
               printf("Element at arr[2]: %d\n", arr[2]); // access value from 2nd index
                printf("Element at arr[4]: %d\n", arr[4]);// access value from nd index

                printf("Element at arr[0]:%d",arr[0]);// access value from 1nd index
                break;

            case 3:
                printf("Enter index to update: ");
                scanf("%d", &pos);

                if(pos >= 0 && pos < n)
                {
                    printf("Enter new value: ");
                    scanf("%d", &value);

                    arr[pos] = value;
                    printf("Element Updated Successfully!\n");
                }
                else
                    printf("Invalid Index!\n");
                break;

            case 4:
                printf("Traversing Array:\n");
                for(i = 0; i < n; i++)
                {
                    printf("arr[%d] = %d\n", i, arr[i]);
                }
                break;

            case 5:
                max = arr[0];

                for(i = 1; i < n; i++)
                {
                    if(arr[i] > max)
                        max = arr[i];
                }

                printf("Maximum Element = %d\n", max);
                break;

            case 6:
                min = arr[0];

                for(i = 1; i < n; i++)
                {
                    if(arr[i] < min)
                        min = arr[i];
                }

                printf("Minimum Element = %d\n", min);
                break;

            case 7:
                sum = 0;

                for(i = 0; i < n; i++)
                {
                    sum += arr[i];
                }

                printf("Sum = %d\n", sum);
                break;

            case 8:
                sum = 0;

                for(i = 0; i < n; i++)
                {
                    sum += arr[i];
                }

                printf("Average = %.2f\n", (float)sum / n);
                break;

            case 9:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 9);

    return 0;
}