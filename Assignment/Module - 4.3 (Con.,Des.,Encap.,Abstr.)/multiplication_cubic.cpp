// Write a program to find the multiplication values and the cubic values using inline function

#include <iostream>
using namespace std;

class values
{
public:
    inline int multiplication(int a, int b)
    {
        return a * b;
    }

    inline int cubic(int a)
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

    values val;

    cout << "Multiplication : " << val.multiplication(no1, no2);
    cout << endl
         << "Cube : " << val.cubic(no1);
}