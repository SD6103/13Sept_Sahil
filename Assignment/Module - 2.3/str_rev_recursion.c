// WAP to find reverse of string using recursion

#include <stdio.h>
#include <string.h>

int rev_str(int str[20]) // creating function
{
    return strlen(str);
}

void main() // main function
{
    int str[20];
    printf("Enter A String : ");
    scanf("%s", &str);
    printf("Length : %d", rev_str(str)); // function calling
}