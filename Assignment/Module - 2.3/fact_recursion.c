// WAP to find factorial using recursion
#include <stdio.h>
int factorial(int a)
{
    if (a <= 1)
    {
        return 1;
    }
    return a * factorial(a - 1);
}
int main()
{
    int a;
    printf("Enter the value : ");
    scanf("%d", &a);
    printf("Factorial is : %d", factorial(a));
    return 0;
}