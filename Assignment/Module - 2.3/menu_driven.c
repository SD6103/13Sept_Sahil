// WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)

#include <stdio.h>
void main()
{
    int n1, n2, choice; // variable

    printf("1. Addition \n2. Subtraction \n3. Multiplication \n4. Division\n");
    printf("Enter What you want to do : ");
    scanf("%d", &choice); // getting choice from user

    switch (choice) // switch case
    {
    case 1:
        printf("Enter number 1 : ");
        scanf("%d", &n1);
        printf("Enter number 2 : ");
        scanf("%d", &n2);
        printf("Addition is : %d", n1 + n2);
        break;
    case 2:
        printf("Enter number 1 : ");
        scanf("%d", &n1);
        printf("Enter number 2 : ");
        scanf("%d", &n2);
        printf("Subtraction is : %d", n1 - n2);
        break;
    case 3:
        printf("Enter number 1 : ");
        scanf("%d", &n1);
        printf("Enter number 2 : ");
        scanf("%d", &n2);
        printf("Multiplication is : %d", n1 * n2);
        break;
    case 4:
        printf("Enter number 1 : ");
        scanf("%d", &n1);
        printf("Enter number 2 : ");
        scanf("%d", &n2);
        printf("Division is : %.2f", (float)n1 / (float)n2);
        break;

    default:
        printf("Invalid Choice");
        break;
    }
}