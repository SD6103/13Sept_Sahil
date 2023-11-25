// WAP Find out length of string without using inbuilt function

#include <stdio.h>
void main()
{
    char str[20];   // variable
    int i, len = 0; // variable
    printf("Enter String : ");
    scanf("%s", &str);

    for (i = 0; str[i] != '\0'; i++) // for loop
    {
        len++;
    }
    printf("Length of String : %d", len);
}