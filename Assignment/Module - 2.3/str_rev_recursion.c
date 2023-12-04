// WAP to find reverse of string using recursion

#include <stdio.h>
#include <string.h>

char str[20];
int len;

void rev_Str(char str[20])
{

    if (str != '\0')
    {
    }
    else
    {
        // rev_Str();
    }
}

void main()
{
    printf("Enter a string : ");
    scanf("%s", &str);

    len = strlen(str);
    rev_Str(str);
}
