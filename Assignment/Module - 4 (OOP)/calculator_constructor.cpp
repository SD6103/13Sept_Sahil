// Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include <iostream>
using namespace std;

class addition
{
public:
    addition(int a, int b)
    {
        cout << endl
             << "Addtion : " << a + b;
    }
};

class substraction
{
public:
    substraction(int a, int b)
    {
        if (a < b)
        {
            cout << endl
                 << "Subtraction : " << b - a;
        }
        else
        {
            cout << endl
                 << "Subtraction : " << a - b;
        }
    }
};

class multiplication
{
public:
    multiplication(int a, int b)
    {
        cout << endl
             << "Multiplication : " << a * b;
    }
};

class division
{
public:
    division(float a, float b)
    {
        cout << endl
             << "Division : " << a / b;
    }
};

int main()
{
    int no1, no2;
    cout << "Enter Number 1 : ";
    cin >> no1;
    cout << "Enter Nunmber 2 : ";
    cin >> no2;

    addition add(no1, no2);
    substraction sub(no1, no2);
    multiplication mul(no1, no2);
    division div(no1, no2);
    return 0;
}