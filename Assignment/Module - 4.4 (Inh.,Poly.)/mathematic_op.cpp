// Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of two number using different parameters and Function Overloading

#include <iostream>
using namespace std; // library file

class math_op // class creation
{
public:
    int addition(int a, int b) // function creation with int peremeter
    {
        return a + b;
    }

    int addition(float a, float b) // function creation with float peremeter
    {
        return a + b;
    }

    int subtraction(int a, int b) // function creation with int peremeter
    {
        return a - b;
    }
    int subtraction(float a, float b) // function creation with float peremeter
    {
        return a - b;
    }

    int multiplication(int a, int b) // function creation with int peremeter
    {
        return a * b;
    }

    int multiplication(float a, float b) // function creation with float peremeter
    {
        return a * b;
    }

    int division(int a, int b) // function creation with int peremeter
    {
        return a / b;
    }
    int division(float a, float b) // function creation with float peremeter
    {
        return a / b;
    }
};

int main()
{
    float n1, n2; // variable
    cout << "Enter number 1 : ";
    cin >> n1;
    cout << "Enter number 2 : ";
    cin >> n2;
    math_op math; // object
    // function calling
    cout << endl
         << "addition of int : " << math.addition(n1, n2);
    cout << endl
         << "addition of float : " << math.addition(n1, n2);
    cout << endl
         << "subtraction of int : " << math.subtraction(n1, n2);
    cout << endl
         << "subtraction of float : " << math.subtraction(n1, n2);
    cout << endl
         << "multiplication of int : " << math.multiplication(n1, n2);
    cout << endl
         << "multiplication of float : " << math.multiplication(n1, n2);
    cout << endl
         << "division of int : " << math.division(n1, n2);
    cout << endl
         << "division of float : " << math.division(n1, n2);
    return 0;
}