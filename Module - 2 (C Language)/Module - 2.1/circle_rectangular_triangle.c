// WAP to find area of circle, rectangular, triangle
#include <stdio.h>
void main()
{
    // Area of Circle
    int r;           // varivale
    float pi = 3.14; // varivale
    printf("Enter radius of circle: ");
    scanf("%d", &r);                    // get radius
    float circle = (float)(pi * r * r); // formula for find area of circle
    printf("Area of Circle is: %.2f", circle);

    // Area of Ractangular
    float w, h; // variable
    float rect; // variable

    printf("\n\nEnter width of Rectangular: ");
    scanf("%f", &w); // get width
    printf("Enter height of Rectangular: ");
    scanf("%f", &h); // get height

    rect = w * h; // formula for find area of rectangular

    printf("Area of Rectanguler is: %.2f", rect);

    // Area of Triangle
    float b, height; // variable
    float tri;       // variable
    printf("\n\nEnter base of triangle: ");
    scanf("%f", &b); // get base
    printf("Enter height of Triangle: ");
    scanf("%f", &height); // get height

    tri = b * height / 2; // formula for find area of triangle

    printf("Area of Triangle is: %.2f", tri);
}