// WAP to print table up to given numbers
#include <stdio.h>
void main()
{
    int no, i;
    printf("Enter a number: ");
    scanf("%d", &no);

    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", no, i, no * i);
    }
}