// Write a program to find the multiplication values and the cubic values using inline function

#include <iostream>
using namespace std; // library file

class values // class creation
{
public:
    inline int multiplication(int a, int b) // inline function
    {
        return a * b;
    }

    inline int cubic(int a) // inline function
    {
        return a * a * a;
    }
};

int main()
{
    int no1, no2;
    cout << "Enter value of no1 : ";
    cin >> no1;

    cout << "Enter value of no2 : ";
    cin >> no2;

    values val; // object

    cout << "Multiplication : " << val.multiplication(no1, no2);
    cout << endl
         << "Cube : " << val.cubic(no1);
}