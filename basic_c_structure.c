/************************************
  1) Documentation Section
  Program: Basic Structure of C
  Author: Jiya Vishwanath
************************************/

// 2) Preprocessor Section
#include <stdio.h>
#define PI 3.14   // 3) Definition Section

// 4) Global Declaration Section
int globalVar = 10;

// 6) Sub Program (Function Declaration)
void display();

int main()   // 5) Main Function
{
    // Local Variable Declaration
    int radius = 5;
    float area;

    // Using defined constant
    area = PI * radius * radius;

    printf("Global Variable = %d\n", globalVar);
    printf("Radius = %d\n", radius);
    printf("Area of Circle = %.2f\n", area);

    // Calling sub program
    display();

    return 0;
}

// 6) Sub Program (Function Definition)
void display()
{
    printf("This is a sub program (function).\n");
}