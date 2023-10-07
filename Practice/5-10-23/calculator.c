// WAP program to create calculator
#include <stdio.h>
void main()
{
    int a, b; //variable
    printf("Enter value of a: ");
    scanf("%d", &a); // get value from user
    printf("Enter value of b: ");
    scanf("%d", &b); // get value from user
    printf("\nAddition is: %d", a + b); // addition
    printf("\nSubtraction is: %d", a - b); //subtration
    printf("\nMultiplication is: %d", a * b); //multiplication
    printf("\nDivision is: %.1f", (float)a / (float)b); // division
    printf("\nModulo is: %d", a % b); // modulo
}
