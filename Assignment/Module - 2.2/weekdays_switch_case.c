// WAP to show Monday to Sunday using switch case
#include <stdio.h>
void main()
{
    int a; // variable
    printf("Enter Number between 1 to 7: ");
    scanf("%d", &a); // get value

    switch (a) // switch case
    {
    case 1:
        printf("Today's Sunday");
        break;
    case 2:
        printf("Today's Monday>");
        break;
    case 3:
        printf("Today's Tuesday");
        break;
    case 4:
        printf("Today's Wednesday");
        break;
    case 5:
        printf("Today's Thursday");
        break;
    case 6:
        printf("Today's Friday");
        break;
    case 7:
        printf("Today's Saturday");
        break;

    default:
        printf("Invalid Input");
        break;
    }
}