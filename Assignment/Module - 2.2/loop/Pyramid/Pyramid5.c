// First Triangle
// First Logic
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= i; j--)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (j = 2; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

// Second Logic
// #include <stdio.h>
// void main()
// {
//     int i, j;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 5; j > i; j--)
//         {
//             printf("  ");
//         }
//         for (j = 1; j <= i; j++)
//         {
//             printf("* ");
//         }
//         for (j = i - 1; j > 0; j--)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }
