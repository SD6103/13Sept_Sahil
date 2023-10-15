// WAP to find simple interest
#include <stdio.h>
void main()
{
    float p, r, t; // variable
    float si;      // variable

    printf("Enter price: ");
    scanf("%f", &p); // get price
    printf("Enter rate: ");
    scanf("%f", &r); // get rate
    printf("Enter time of loan: ");
    scanf("%f", &t); // get time

    si = (p * r * t) / 100; // formula of simple interest

    printf("Simple Interest is: %.2f", si);
}