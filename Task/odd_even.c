#include <stdio.h>
void main()
{
    int num; // variables
    printf("enter a number : ");
    scanf("%d", &num); // get value from user
    if (num % 2 == 0) // condition
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}
