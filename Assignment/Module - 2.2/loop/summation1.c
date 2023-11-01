// Write a program make a summation of given number (E.g., 1523 Ans: -11)

#include <stdio.h>
void main()
{
    int n, i, sum = 0, m;
    printf("Enter a Value : ");
    scanf("%d", &n);

    for (i = n; i > 0; i = i / 10)
    {
        m = i % 10;
        sum = sum + m;
    }
    printf("Total is : %d", sum);
}