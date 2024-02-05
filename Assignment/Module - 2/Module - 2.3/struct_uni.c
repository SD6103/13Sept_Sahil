// WAP to show difference between Structure and Union.

#include <stdio.h>

struct example // creating structure
{
    // data members
    int a;
    char b;
    char str_name[20];
    double c;
    float d;
} e; // object of structure

union example1 // creating union
{
    // data members
    int a;
    char b;
    char str_name[20];
    double c;
    float d;
} ex; // object for union

int main()
{
    printf("Size of structure: %d bytes\n", sizeof(e)); // get size of structure
    printf("Size of union: %d bytes\n", sizeof(ex));    // get size of union
    return 0;
}