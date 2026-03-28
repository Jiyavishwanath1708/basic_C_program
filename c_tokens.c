#include<stdio.h>
#include<conio.h>

void keywords();
void identifiers();
void constants();
void strings();
void operators();
void special_symbols();

void keywords(){
    
printf("\n***** C KEYWORDS *****\n\n");

printf("%-10s %-10s %-10s %-10s %-10s\n", "auto", "break", "case", "char", "const");
printf("%-10s %-10s %-10s %-10s %-10s\n", "continue", "default", "do", "double", "else");
printf("%-10s %-10s %-10s %-10s %-10s\n", "enum", "extern", "float", "for", "goto");
printf("%-10s %-10s %-10s %-10s %-10s\n", "if", "int", "long", "register", "return");
printf("%-10s %-10s %-10s %-10s %-10s\n", "short", "signed", "sizeof", "static", "struct");
printf("%-10s %-10s %-10s %-10s %-10s\n", "switch", "typedef", "union", "unsigned", "void");
printf("%-10s %-10s\n", "volatile", "while");
 int a = 10;
    float b = 5.5;
    printf("Keywords used: int, float, return\n");
    printf("Values: a = %d, b = %f\n", a, b);
}
void identifiers() {
    int number = 100;
    printf("Identifier: number = %d\n", number);
}
void constants() {
    // Declaring constants
    const int intConst = 10;
    const float floatConst = 3.14;
    const char charConst = 'A';

    printf("\n===== CONSTANTS EXAMPLE =====\n\n");

    printf("Integer Constant   : %d\n", intConst);
    printf("Float Constant     : %.2f\n", floatConst);
    printf("Character Constant : %c\n", charConst);
}
void strings() {
    // String without size (compiler automatically sets size)
    char str1[] = "c programming";

    // String with size
    char str2[10] = "c coder";

    printf("\n===== STRING TYPES =====\n\n");

    printf("1. Without Size  : %s\n", str1);

    printf("2. With Size     : %s\n", str2);
   

}
#include <stdio.h>

void special_symbols() {
    printf("Special Symbols:\n");
    printf("-------------------------\n");
    printf("Asterisk (*)\t\tAssignment Operator (=)\n");
    printf("Brackets [ ]\t\tBraces { }\n");
    printf("Comma (,)\t\tColon (:)\n");
    printf("Semicolon (;)\t\tParentheses ( )\n");
    printf("Pre-processor (#)\tPeriod (.)\n");
}
void operators() {
    int a = 10, b = 5, result;

    printf("\n===== OPERATORS EXAMPLE =====\n\n");

    // Unary Operator
    printf("---- Unary Operators ----\n");
    printf("Initial value of a = %d\n", a);
    printf("Increment (++a) = %d\n", ++a);
    printf("Decrement (--a) = %d\n\n", --a);

    //  Binary Operators
    printf("---- Binary Operators ----\n");
    printf("a = %d, b = %d\n", a, b);
    printf("Addition (a + b)       = %d\n", a + b);
    printf("Subtraction (a - b)    = %d\n", a - b);
    printf("Multiplication (a * b) = %d\n", a * b);
    printf("Division (a / b)       = %d\n\n", a / b);

    // Ternary Operator
    printf("---- Ternary Operator ----\n");
    result = (a > b) ? a : b;
    printf("Greater value between a and b = %d\n", result);
}

int main()
{
    int choice;
    do{
        printf("\n* * * * * MAIN MENU * * * * *\n");
        printf("1.keywords\n");
        printf("2.identifiers\n");
        printf("3.constants\n");
        printf("4.strings\n");
        printf("5.operators\n");
        printf("6.special symbols\n");
        printf("0.exit..");
        printf("enter choice\n");
        scanf("%d",&choice);
       switch(choice)
       {
            case 1:keywords(); break;
            case 2: identifiers(); break;
            case 3: constants(); break;
            case 4: strings(); break;
            case 5: operators(); break;
            case 6: special_symbols(); break;
            case 0: printf("Exiting...\n"); break;
                    default: printf("Invalid choice!\n");
        }


    }while(choice != 0);
}
