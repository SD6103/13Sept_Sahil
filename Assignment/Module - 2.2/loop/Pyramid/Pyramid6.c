/*

 *
 * *
 * * *
 * * * *
 * * * * *
 * * * * * *
 * * * * *
 * * * *
 * * *
 * *
 *

 */

#include <stdio.h>
void main()
{
    int i, j;                // variable
    for (i = 1; i <= 6; i++) // outter loop 1
    {
        for (j = 1; j <= i; j++) // inner loop
        {
            printf("* ");
        }
        printf("\n");
    }

    for (i = 5; i >= 1; i--) // outter loop 2
    {
        for (j = 1; j <= i; j++) // inner loop
        {
            printf("* ");
        }
        printf("\n");
    }
}