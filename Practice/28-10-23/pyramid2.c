/*
 *
 * *
 * * *
 * *
 *
 */

// #include <stdio.h>
// void main()
// {
//   int i, j;
//   for (i = 1; i <= 5; i++) // first loop
//   {
//     for (j = 1; j <= i; j++)
//     {
//       printf("* ");
//     }
//     printf("\n");
//   }

//   for (i = 4; i >= 1; i--) // second loop
//   {
//     for (j = 1; j <= i; j++)
//     {
//       printf("* ");
//     }
//     printf("\n");
//   }
// }

/*

*
 *
* *
 * *
* * *
 * *
* *
 *
*

 */

#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++) // first loop
    {
        for (j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("  ");
            }
            if (j % 2 != 0)
            {
                printf("*   ");
            }
        }
        printf("\n");
    }

    for (i = 4; i >= 1; i--) // Second loop
    {
        for (j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("  ");
            }
            if (j % 2 != 0)
            {
                printf("*   ");
            }
        }
        printf("\n");
    }

    // for (i = 4; i >= 1; i--) // second loop
    // {
    //     for (j = 1; j <= i; j++)
    //     {
    //         if (i % 2 != 0)
    //         {
    //             printf("* ");
    //         }
    //         else
    //         {
    //             printf(" *");
    //         }
    //     }
    //     printf("\n");
    // }
}
