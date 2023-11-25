/*
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/

#include <stdio.h>
void main()
{
    int i, j;                // variables
    for (i = 1; i <= 5; i++) // outer loop
    {
        for (j = 1; j <= i; j++) // inner loop
        {
            if (j % 2 == 0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
        }
        printf("\n");
    }
}