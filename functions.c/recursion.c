#include <stdio.h>

/*
    RECURSIVE FUNCTION:
    A recursive function is a function that calls itself
    repeatedly until a terminating condition is satisfied.

    Syntax:
    return_type function_name(parameters)
    {
        if(base condition)
            return value;

        return function_name(smaller_problem);
    }
*/


/* Function Prototypes */

// Recursive Functions
int factorial(int);
int fibonacci(int);
int sumOfNaturalNumbers(int);
int reverseNumber(int, int);

// Call by Value and Call by Reference Functions
void callByValue(int);
void callByReference(int *);

int main()
{
    int choice, n, num, rev = 0, i;

    do
    {
        printf("\n========== RECURSION MENU ==========\n");
        printf("1. Factorial using Recursion\n");
        printf("2. Fibonacci Series using Recursion\n");
        printf("3. Sum of First N Natural Numbers\n");
        printf("4. Reverse a Number using Recursion\n");
        printf("5. Call by Value\n");
        printf("6. Call by Reference\n");
        printf("7. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &n);

            printf("Factorial of %d = %d\n", n, factorial(n));
            break;

        case 2:
            printf("Enter number of terms: ");
            scanf("%d", &n);

            printf("Fibonacci Series: ");

            for (i = 0; i < n; i++)
            {
                printf("%d ", fibonacci(i));
            }

            printf("\n");
            break;

        case 3:
            printf("Enter a number: ");
            scanf("%d", &n);

            printf("Sum of first %d natural numbers = %d\n",
                   n, sumOfNaturalNumbers(n));
            break;

        case 4:
            printf("Enter a number: ");
            scanf("%d", &num);

            rev = reverseNumber(num, 0);

            printf("Reversed Number = %d\n", rev);
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%d", &num);

            printf("Before Function Call : num = %d\n", num);

            callByValue(num);

            printf("After Function Call  : num = %d\n", num);
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%d", &num);

            printf("Before Function Call : num = %d\n", num);

            callByReference(&num);

            printf("After Function Call  : num = %d\n", num);
            break;

        case 7:
            printf("Exiting Program...\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 7);

    return 0;
}
/*----------------------------------------------------
                FUNCTION DEFINITIONS
----------------------------------------------------*/
/*
    Factorial using Recursion

    Example:
    5! = 5 × 4 × 3 × 2 × 1

    Base Condition:
    factorial(0) = 1
*/
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}
/*
    Fibonacci using Recursion

    Series:
    0 1 1 2 3 5 8 ...

    Base Conditions:
    fibonacci(0) = 0
    fibonacci(1) = 1
*/
int fibonacci(int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}
/*
    Sum of First N Natural Numbers

    Example:
    1 + 2 + 3 + 4 + 5 = 15

    Base Condition:
    sum(1) = 1
*/
int sumOfNaturalNumbers(int n)
{
    if (n == 1)
        return 1;

    return n + sumOfNaturalNumbers(n - 1);
}
/*
    Reverse a Number using Recursion

    Example:
    1234 -> 4321
*/
int reverseNumber(int n, int rev)
{
    if (n == 0)
        return rev;

    return reverseNumber(n / 10, rev * 10 + n % 10);
}
/*
    Call by Value:
    A copy of actual argument is passed to function.
    Changes inside the function do not affect original value.
*/
void callByValue(int x)
{
    x = x + 10;

    printf("Inside Function : x = %d\n", x);
}
/*
    Call by Reference:
    Address of actual argument is passed to function. Changes inside the function affect original value.
*/
void callByReference(int *x)
{
    *x = *x + 10;

    printf("Inside Function : x = %d\n", *x);
}