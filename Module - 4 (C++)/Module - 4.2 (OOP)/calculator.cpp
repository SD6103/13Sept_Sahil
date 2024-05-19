// WAP to create simple calculator using class
#include <iostream>
using namespace std; // library file

class calculator // creating class
{
public:
    int a, b; // variable

    // member function
    int addition(int a, int b)
    {
        cout << endl
             << "Addition : " << a + b;
    }

    // member function
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

    // member function
    int multiplication(int a, int b)
    {
        cout << endl
             << "Multiplication : " << a * b;
    }

    // member function
    int division(int a, int b)
    {
        cout << endl
             << "Division : " << a / b;
    }

    // member function
    int modulo(int, int b)
    {
        cout << endl
             << "Modulo : " << a % b;
    }
};

int main()
{
    calculator cal; // creating object
    int n1, n2;     // variable
    cout << "Enter number 1 : ";
    cin >> n1;
    cout << "Enter number 2 : ";
    cin >> n2;
    cal.addition(n1, n2);       // calling addition
    cal.substraction(n1, n2);   // calling subtraction
    cal.multiplication(n1, n2); // calling multiplication
    cal.division(n1, n2);       // calling division
    cal.modulo(n1, n2);         // calling modulo
    return 0;
}