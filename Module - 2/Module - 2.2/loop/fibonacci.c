// WAP to print Fibonacci series up to given numbers
#include <stdio.h>
void main()
{
    int a = 0, b = 1, i, no; // variables
    printf("Enter a number: ");
    scanf("%d", &no); // get value

    printf("%d %d", a, b); // print 0 and 1 default

    for (i = 2; i < no; i++) // for loop
    {
        int fact = a + b; // 1 = 0 + 1
        a = b;            // a = 1
        b = fact;         // b = 1

        printf(" %d", fact);
    }
}

/*
0 + 1 = 1
1 + 1 = 2
1 + 2 = 3
2 + 3 = 5
3 + 5 = 8
...
*/
