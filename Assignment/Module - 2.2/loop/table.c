// WAP to print table up to given numbers
#include <stdio.h>
void main()
{
    int no, i, j; // variable
    printf("Enter a number: ");
    scanf("%d", &no); // get value

    for (i = 1; i <= no; i++) // for loop
    {
        printf("Table of %d: \n", i);
        printf("-----------\n");
        for (j = 1; j <= 10; j++) // for loop
        {
            printf("%d * %d = %d", i, j, i * j);
            printf("\n");
        }
        printf("\n");
    }
}