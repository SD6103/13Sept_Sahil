// Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5)
#include <stdio.h>
void main()
{
    int n, i, sum; // variables
    printf("Enter a Value : ");
    scanf("%d", &n); // get value

    sum = n % 10;  // modulus the value of n by 10 and assign to the sum
    while (n > 10) // while loop
    {
        n = n / 10;
    }
    sum = sum + n; // increament the sum by the value of n
    printf("%d", sum);
}