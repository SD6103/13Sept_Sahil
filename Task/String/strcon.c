// WAP to concate two strings withour using inbuild function
#include <stdio.h>
#include <string.h>
void main()
{
    char fnm[20], lnm[20], constr[20];
    int i = 0, j = 0;
    printf("Enter First Name : ");
    scanf("%s", &fnm);
    printf("Enter Last Name : ");
    scanf("%s", &lnm);

    for (i = 0; fnm[i] != '\0'; i++)
    {
        constr[i] = fnm[i];
    }

    i = 0;
    for (i = 0; lnm[i] != '\0'; i++)
    {
        constr[i] = lnm[i];
    }

    printf("%s", constr);
}