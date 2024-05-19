// WAP to take 10 no. Input from user and find out …
// 1. How many Even numbers are there
// 2. How many odd numbers are there
// 3. Sum of even numbers
// 4. Sum of odd numbers

#include <stdio.h>
void main()
{
    int no, i, odd = 0, even = 0, sum_even = 0, sum_odd = 0; // variables
    for (i = 1; i <= 10; i++)                                // for loop
    {
        printf("Enter no %d : ", i);
        scanf("%d", &no); // get value

        if (no % 2 == 0) // condition to get even/odd
        {
            even++;         // count of even
            sum_even += no; // sum of even
        }
        else
        {
            odd++;         // count of odd
            sum_odd += no; // sum of odd
        }
    }

    printf("\nEven numbers : %d", even);            // print count of even numbers
    printf("\nOdd numbers : %d", odd);              // print count of odd numbers
    printf("\nSum of Even Numbers : %d", sum_even); // print sum of even numbers
    printf("\nSum of Odd Numbers : %d", sum_odd);   // print sum of odd numbers
}