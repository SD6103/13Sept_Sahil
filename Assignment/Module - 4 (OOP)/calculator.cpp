// WAP to create simple calculator using class
#include <iostream>
using namespace std;

class calculator
{
public:
    int a, b;
    int addition(int a, int b)
    {
        cout << endl
             << "Addition : " << a + b;
    }

    int substraction(int a, int b)
    {
        if (a > b)
        {
            cout << "Subtraction : " << a - b;
        }
        else
            cout << endl
                 << "Subtraction : " << b - a;
    }

    int multiplication(int a, int b)
    {
        cout << endl
             << "Multiplication : " << a * b;
    }

    int division(int a, int b)
    {
        cout << endl
             << "Division : " << a / b;
    }

    int modulo(int, int b)
    {
        cout << endl
             << "Modulo : " << a % b;
    }
};

int main()
{
    calculator cal;
    int n1, n2;
    cout << "Enter number 1 : ";
    cin >> n1;
    cout << "Enter number 2 : ";
    cin >> n2;
    cal.addition(n1, n2);
    cal.substraction(n1, n2);
    cal.multiplication(n1, n2);
    cal.division(n1, n2);
    cal.modulo(n1, n2);
    return 0;
}