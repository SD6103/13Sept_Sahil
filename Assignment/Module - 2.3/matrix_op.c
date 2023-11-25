// WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array

#include <stdio.h>
void main()
{
    int row, col; // variable
    printf("Enter Numbers of row : ");
    scanf("%d", &row); // get row of array
    printf("Enter Numnbers of columns : ");
    scanf("%d", &col); // get column of array

    int matrix_1[row][col], matrix_2[row][col]; // creating arrays
    int total[row][col];                        // array
    int i, j;                                   // variable

    // get value of matrix_1
    printf("Values of Matrix_1 : \n");
    for (i = 0; i < row; i++) // outer loop
    {
        for (j = 0; j < col; j++) // inner loop
        {
            printf("Enter Value of Matrix_1[%d][%d] : ", i, j);
            scanf("%d", &matrix_1[i][j]);
        }
    }

    // get value of matrix_2
    printf("Values of Matrix_2 : \n");
    for (i = 0; i < row; i++) // outer loop
    {
        for (j = 0; j < col; j++) // inner loop
        {
            printf("Enter Value of Matrix_2[%d][%d] : ", i, j);
            scanf("%d", &matrix_2[i][j]);
        }
    }

    // addition of matrices
    for (i = 0; i < row; i++) // outer loop
    {
        for (j = 0; j < col; j++) // inner loop
        {
            total[i][j] = matrix_1[i][j] + matrix_2[i][j];
        }
    }

    // print addition of matrices
    printf("\nAddition of Matrices : \n");
    for (i = 0; i < row; i++) // outer loop
    {
        for (j = 0; j < col; j++) // inner loop
        {
            printf("%d ", total[i][j]);
        }
        printf("\n");
    }

    // subtraction of matrices
    for (i = 0; i < row; i++) // outer loop
    {
        for (j = 0; j < col; j++) // inner loop
        {
            total[i][j] = matrix_1[i][j] - matrix_2[i][j];
        }
    }

    // print subtraction of matrices
    printf("\nSubtraction of Matrices : \n");
    for (i = 0; i < row; i++) // outer loop
    {
        for (j = 0; j < col; j++) // inner loop
        {
            printf("%d ", total[i][j]);
        }
        printf("\n");
    }

    // multipliaction of matrices
    for (i = 0; i < row; i++) // outer loop
    {
        for (j = 0; j < col; j++) // inner loop
        {
            total[i][j] = matrix_1[i][j] * matrix_2[i][j];
        }
    }

    // print multipliaction of matrices
    printf("\nMultiplication of Matrices : \n");
    for (i = 0; i < row; i++) // outer loop
    {
        for (j = 0; j < col; j++) // inner loop
        {
            printf("%d ", total[i][j]);
        }
        printf("\n");
    }
}