// WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746
#include <stdio.h>
void main()
{
    int i, n, a, rev = 0;
    printf("Enter a value: ");
    scanf("%d", &n);

    for (i = n; i != 0; i /= 10) // 586 5!=0
    {
        a = i % 10;         // a = 586 % 10 = 6
        rev = rev * 10 + a; // 0 *10 +6 = 6
    }
    printf("%d", rev);
}
