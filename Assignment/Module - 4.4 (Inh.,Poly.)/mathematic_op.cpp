// Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of two number using different parameters and Function Overloading

#include <iostream>
using namespace std; // library file

class math_op // class creation
{
public:
    int addition(int a, int b, int c) // function creation with int peremeter
    {
        return a + b + c;
    }

    int subtraction(int a, int b) // function creation with int peremeter
    {
        return a - b;
    }

    int multiplication(int a, int b, int c) // function creation with int peremeter
    {
        return a * b * c;
    }

    int division(float a, float b) // function creation with int peremeter
    {
        return a / b;
    }
};

int main()
{
    float n1, n2, n3; // variable
    cout << "Enter number 1 : ";
    cin >> n1;
    cout << "Enter number 2 : ";
    cin >> n2;
    cout << "Enter number 3 : ";
    cin >> n3;
    math_op math; // object
    // function calling
    cout << endl
         << "addition : " << math.addition(n1, n2, n3);
    cout << endl
         << "subtraction : " << math.subtraction(n1, n2);
    cout << endl
         << "multiplication : " << math.multiplication(n1, n2, n3);
    cout << endl
         << "division : " << math.division(n1, n2);
    return 0;
}