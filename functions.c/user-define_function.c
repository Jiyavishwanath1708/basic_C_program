#include <stdio.h>
/*
    USER-DEFINED FUNCTION

    A user-defined function is a function created by the programmer
    to perform a specific task.
*/
/* 

    Components of a Function:

    1. Return Type  -> int
    2. Function Name -> sum
    3. Parameters -> int a, int b
    4. Function Body -> Statements inside {}
    5. Return Value -> return result;

    Example:

        int sum(int a, int b)
        {
            int result = a + b;
            return result;
        }

    Function Prototype (Declaration)

    With Parameters:
        int add(int, int);

    Without Parameters:
        void display(void);

    Function Call:
        add(10, 20);
        display();
*/


/* Function Prototypes */

// Type 1: No Arguments, No Return Value
void addition1(void);

// Type 2: Arguments, No Return Value
void addition2(int, int);

// Type 3: No Arguments, Return Value
int addition3(void);

// Type 4: Arguments, Return Value
int addition4(int, int);


int main()
{
    int choice, num1, num2, result;

    do
    {
        printf("\n========== USER-DEFINED FUNCTION MENU ==========\n");
        printf("1. No Arguments, No Return Value\n");
        printf("2. Arguments, No Return Value\n");
        printf("3. No Arguments, Return Value\n");
        printf("4. Arguments, Return Value\n");
        printf("5. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addition1();       // Function Call
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%d%d", &num1, &num2);

                addition2(num1, num2);      // Function Call
                break;

            case 3:
                result = addition3();       // Function Call

                printf("Sum = %d\n", result);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%d%d", &num1, &num2);

                result = addition4(num1, num2);     // Function Call

                printf("Sum = %d\n", result);
                break;

            case 5:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}


/*----------------------------------------------------
    FUNCTION DEFINITIONS
----------------------------------------------------*/

/*
    Type 1
    No Arguments, No Return Value
*/

void addition1(void)
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Sum = %d\n", a + b);
}


/*
    Type 2
    Arguments, No Return Value
*/

void addition2(int a, int b)
{
    printf("Sum = %d\n", a + b);
}


/*
    Type 3
    No Arguments, Return Value
*/

int addition3(void)
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    return a + b;
}


/*
    Type 4
    Arguments, Return Value
*/

int addition4(int a, int b)
{
    return a + b;
}