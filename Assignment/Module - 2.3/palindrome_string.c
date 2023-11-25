//  WAP to reverse a string and check that the string is palindrome or not

#include <stdio.h>
#include <string.h>
void main()
{
    char word[50], cpyword[50]; // arrays

    printf("Enter a Word : ");
    scanf("%s", &word); // getting string

    strcpy(cpyword, word); // copy string
    strrev(cpyword);       // reverse string

    if (strcmp(cpyword, word) == 0) // comparing string
    {
        printf("String is Palindrome");
    }
    else
    {
        printf("String is not Palindrome");
    }
}