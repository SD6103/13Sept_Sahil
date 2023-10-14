// WAP to checkif the given year is leap year or not
#include <stdio.h>
void main()
{
    int year; // variable
    printf("Enter year: ");
    scanf("%d", &year); // get the year

    if (year % 4 == 0) // condition
    {
        printf("Leap year");
    }
    else
    {
        printf("Not Leap year");
    }
}