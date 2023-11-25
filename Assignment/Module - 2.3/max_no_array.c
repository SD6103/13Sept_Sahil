// Write a program to find out the max number from given array using function

#include <stdio.h>

int n, i, max = 0; // variable

void find_max() // creating a function
{
    printf("How many elements do want to enter : ");
    scanf("%d", &n); // get number of elements of array

    int arr[n];

    for (i = 0; i <= n; i++) // for loop
    {
        printf("Enter element %d : ", i, arr[i]);
        scanf("%d", &arr[i]); // get value of element
    }

    for (i = 0; i <= n; i++) // for loop
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("%d", max);
}

void main()
{
    find_max(); // function calling
}