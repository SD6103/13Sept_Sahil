// Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of two number using different parameters and Function Overloading

#include <iostream>
using namespace std; // library file

class math_op // class creation
{
public:
    int calc(int a, int b) // function creation with int peremeter
    {
        return a + b;
    }

    int calc(float a, float b) // function creation with int peremeter
    {
        return a - b;
    }

    int calc(long a, long b) // function creation with long peremeter
    {
        return a * b;
    }

    int calc(double a, double b) // function creation with float peremeter
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
    math_op math; // object
    // function calling
    cout << endl
         << "addition : " << math.calc(n1, n2);
    cout << endl
         << "subtraction : " << math.calc(n1, n2);
    cout << endl
         << "multiplication : " << math.calc(n1, n2);
    cout << endl
         << "division : " << math.calc(n1, n2);
    return 0;
}