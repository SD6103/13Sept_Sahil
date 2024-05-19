// WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo)

#include <stdio.h>
void main()
{
    int a, b; // variable
    printf("Enter value of a: ");
    scanf("%d", &a); // get value of a
    printf("Enter value of b: ");
    scanf("%d", &b);                                    // get value of b
    printf("\nAddition is: %d", a + b);                 // addition
    printf("\nSubtraction is: %d", a - b);              // subtraction
    printf("\nMultiplication is: %d", a * b);           // multiplication
    printf("\nDivision is: %.1f", (float)a / (float)b); // division
    printf("\nModulo is: %d", a % b);                   // modulo
}