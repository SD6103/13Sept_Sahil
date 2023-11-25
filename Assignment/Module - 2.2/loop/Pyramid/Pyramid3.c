/*
A
B C
D E F
G H I J
K L M N O
*/

#include <stdio.h>
void main()
{
    int i, j;                // variables
    char k = 65;             // variable
    for (i = 1; i <= 5; i++) // outter loop
    {
        for (j = 1; j <= i; j++) // inner loop
        {
            printf("%c ", k);
            k++;
        }
        printf("\n");
    }
}