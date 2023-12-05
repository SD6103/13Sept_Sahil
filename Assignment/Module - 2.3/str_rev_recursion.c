// WAP to find reverse of string using recursion

#include <stdio.h>
#include <string.h>

// creating a function
char rev_Str(char str[20], int len)
{
    // condition
    if (str[len] == '\0')
    {
        return ' ';
    }
    else
    {
        printf("%c", str[len]);
        rev_Str("string", len - 1); // function calling (recursion)
    }
}

void main()
{
    char str[20] = {"string"}; // create string
    int len = strlen(str);     // get string length
    rev_Str(str, len - 1);     // function calling
}
