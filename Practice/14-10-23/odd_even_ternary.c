// WAP to find number is even or odd using ternary operator
#include <stdio.h>
void main()
{
    int no; // variable
    printf("Enter number: ");
    scanf("%d", &no); // getr value

    (no % 2 == 0) ? printf("Number is Even") : printf("Number is Odd");
    // ternary operator
}
