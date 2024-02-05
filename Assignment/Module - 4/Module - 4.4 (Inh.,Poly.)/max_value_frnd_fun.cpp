// Write a program to find the max number from given two numbers using friend function

#include <iostream>

using namespace std; // library file

class max_no // class creation
{
private:
    int num1, num2; // data member

public:
    max_no(int a, int b) // perameterized constructor
    {
        num1 = a;
        num2 = b;
    }

    friend int find_max(max_no mn); // create frirend function
};

int find_max(max_no mn) // friend function
{
    if (mn.num1 > mn.num2)
    {
        return mn.num1;
    }
    else if (mn.num1 < mn.num2)
    {
        return mn.num2;
    }
}

int main()
{
    // variables
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    max_no mn(num1, num2);                         // object creation
    cout << "Maximum number is: " << find_max(mn); // calling the friend function

    return 0;
}
