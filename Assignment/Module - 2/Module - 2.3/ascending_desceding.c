// WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice

#include <stdio.h>
void main()
{
    // variables
    int choice, i, j, n, temp;

    printf("How many elements do you want to enter in both array : ");
    scanf("%d", &n);  // get elements for both array
    int n1[n], n2[n]; // creating both array

    for (i = 0; i < n; i++) // for loop for array 1
    {
        printf("Enter the elements of array: ");
        scanf("%d", &n1[i]);
    }
    for (i = 0; i < n; i++) // for loop for array 2
    {
        printf("Enter the elements of array: ");
        scanf("%d", &n2[i]);
    }

    printf("1. Ascending\n2. Descending\n");
    printf("What do you want to do with array : ");
    scanf("%d", &choice); // get user's choice for assending or descending the array
    switch (choice)
    {
    // First Case
    case 1:
        printf("First Array\n");
        for (i = 0; i < n; i++) // outter loop
        {
            for (j = i + 1; j < n; j++) // inner loop
            {
                if (n1[i] > n1[j]) // condition
                {
                    // swaping the elements
                    temp = n1[i];
                    n1[i] = n1[j];
                    n1[j] = temp;
                }
            }
            printf("Value of the array[%d]: %d\n", i, n1[i]);
        }

        printf("Second Array\n");
        for (i = 0; i < n; i++) // outter loop
        {
            for (j = i + 1; j < n; j++) // inner loop
            {
                // condition
                if (n2[i] > n2[j])
                {
                    // swaping the elements
                    temp = n2[i];
                    n2[i] = n2[j];
                    n2[j] = temp;
                }
            }
            printf("Value of the array[%d]: %d\n", i, n2[i]);
        }
        break;

    // Second Case
    case 2:
        printf("First Array\n");
        for (i = 0; i < n; i++) // outter loop
        {
            for (j = i + 1; j < n; j++) // inner loop
            {
                // condition
                if (n1[i] < n1[j])
                {
                    // swaping the elements
                    temp = n1[j];
                    n1[j] = n1[i];
                    n1[i] = temp;
                }
            }
            printf("Value of the array[%d]: %d\n", i, n1[i]);
        }

        printf("Second Array\n");
        for (i = 0; i < n; i++) // outter loop
        {
            for (j = i + 1; j < n; j++) // inner loop
            {
                // condition
                if (n2[i] < n2[j])
                {
                    // swaping the elements
                    temp = n2[j];
                    n2[j] = n2[i];
                    n2[i] = temp;
                }
            }
            printf("Value of the array[%d]: %d\n", i, n2[i]);
        }
        break;

    default:
        printf("Invalid Choice");
        break;
    }
}