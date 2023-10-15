// Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)
#include <stdio.h>
void main()
{
    int a, b; // variables
    printf("Enter value of a: ");
    scanf("%d", &a); // get values
    printf("Enter value of b: ");
    scanf("%d", &b);                                    // get values
    printf("\nAddition is: %d", a + b);                 // addition
    printf("\nSubtraction is: %d", a - b);              // subtraction
    printf("\nMultiplication is: %d", a * b);           // multiplication
    printf("\nDivision is: %.1f", (float)a / (float)b); // division
    printf("\nModulo is: %d", a % b);                   // modulo
}