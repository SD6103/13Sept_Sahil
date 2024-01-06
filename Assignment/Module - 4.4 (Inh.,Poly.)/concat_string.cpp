// Write a program to concatenate the two strings using Operator Overloading

#include <iostream>
#include <string.h>

using namespace std; // library file

class concat
{
public:
    // data member
    char a[20];
    // member function
    void get(char str[20])
    {
        strcpy(a, str);
    }

    // operator overloading
    concat operator+(concat &c2)
    {
        concat c3;
        cout << endl
             << "Concatination : " << a << c2.a;
        return c3;
    }
};

int main()
{
    char s1[20], s2[20]; // variable
    cout << "Enter string 1 : ";
    cin >> s1;
    cout << "Enter string 2 : ";
    cin >> s2;
    concat obj1, obj2, obj3; // object creation
    obj1.get(s1);            // function call
    obj2.get(s2);            // function call
    obj3 = obj1 + obj2;      // concatination through objects
}