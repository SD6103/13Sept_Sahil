/*
A
A B
A B C
A B C D
A B C D E
*/

#include <stdio.h>
void main()
{
    int i, j;                  // variables
    for (i = 65; i <= 69; i++) // outter loop
    {
        for (j = 65; j <= i; j++) // inner loop
        {
            printf("%c ", j);
        }
        printf("\n");
    }
}