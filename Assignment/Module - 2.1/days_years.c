// WAP to convert years into days and days into years
#include <stdio.h>
void main()
{
    float days, years; // variables
    printf("Enter Years: ");
    scanf("%f", &years); // get years

    days = years * 365; // convert years into days
    printf("Days: %.1f", days);

    printf("\n\nEnter Days: ");
    scanf("%f", &days); // get Days

    years = days / 365; // convert days into years
    printf("Years: %.1f", years);
}