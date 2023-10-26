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
//     int i, j, n = 5;
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j > i; j--) // for space
//         {
//             printf(" ");
//         }

//         for (j = 1; j <= i; j++)
//         {
//             printf("*\n");
//         }
//         printf("\n");
//     }
// }

/*

 *
   *
 *   *
   *   *
 *   *   *
   *   *
 *   *
   *
 *

 */

#include <stdio.h>
void main()
{
  int i, j, k;

  for (i = 1; i <= 8; i++)
  {
    if (i % 2 != 0)
    {
      for (j = 8; j <= i; j++)
      {
        printf("*");
      }
    }
  }
}