// Write a program to find out the max from given number (E.g., No:- 1562 Max number is 6)

#include <stdio.h>
void main()
{
    int i, n, a = 0, max = 0;
    printf("Enter a value: ");
    scanf("%d", &n);

    for (i = n; i != 0; i /= 10)
    {
        a = i % 10;
    }
}