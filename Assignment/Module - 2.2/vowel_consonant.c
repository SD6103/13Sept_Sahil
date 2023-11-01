// WAP to show Vowel or Consonant using switch case
#include <stdio.h>
void main()
{
    char alpha;
    printf("Enter a Alphabet:");
    scanf("%c", &alpha);

    switch (alpha)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("It's Vowel");
        break;
    default:
        printf("It's Consonant");
        break;
    }
}