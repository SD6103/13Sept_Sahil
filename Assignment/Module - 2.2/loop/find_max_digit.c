// Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)

#include <stdio.h>
void main()
{
    int n, i, max = 0, a; // variable
    printf("Enter No : ");
    scanf("%d", &n); // get value

    for (i = n; i > 0; i /= 10) // for loop
    {
        a = i % 10;
        if (a > max)
        {
            max = a;
        }
    }
    printf("%d", max);
}