// WAP to print factorial of given number
#include <stdio.h>
void main()
{
    int no, i, fact = 1; // variable
    printf("Enter a number: ");
    scanf("%d", &no); // get value

    for (i = 1; i <= no; i++) // for loop
    {
        fact = fact * i; // factorial logic
    }
    printf("Factorial of %d is %d", no, fact);
}

// 1 * 2 * 3 * 4 * 5....n