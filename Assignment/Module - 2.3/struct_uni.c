// WAP to show difference between Structure and Union.

#include <stdio.h>

struct example // creating structure
{
    int a;             // data member
    char b;            // data member
    char str_name[20]; // data member
    double c;          // data member
    float d;           // data member
} e;                   // object of structure

union example1 // creating union
{
    int a;             // data member
    char b;            // data member
    char str_name[20]; // data member
    double c;          // data member
    float d;           // data member
} ex;                  // object of union

int main()
{
    printf("Size of structure: %d bytes\n", sizeof(e)); // get size of structure
    printf("Size of union: %d bytes\n", sizeof(ex));    // get size of union
    return 0;
}