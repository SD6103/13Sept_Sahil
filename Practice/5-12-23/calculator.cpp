#include <iostream>
using namespace std;
class calculator
{
public:
    int a, b;
    void get()
    {
        cout << "Enter value of a : ";
        cin >> a;
        cout << "Enter value of b : ";
        cin >> b;
    }

    void addition()
    {
        cout << "\nAddition : " << a + b;
    }
    void subtraction()
    {
        if (a < b)
        {
            cout << "\nSubtraction : " << b - a;
        }
        else
        {
            cout << "\nSubtraction : " << a - b;
        }
    }
    void multiplication()
    {
        cout << "\nMultipliaction : " << a * b;
    }
    void division()
    {
        cout << "\nDivition : " << a / b;
    }
} cal;

int main()
{
    cal.get();
    cal.addition();
    cal.subtraction();
    cal.multiplication();
    cal.division();
    return 0;
}