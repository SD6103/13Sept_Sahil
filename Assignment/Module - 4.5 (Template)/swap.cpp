// Write a program of to swap the two values using template

#include <iostream>
using namespace std;

template <typename swap>

class swaping
{

public:
    swaping(swap a, swap b)
    {
        int c;
        c = a;
        a = b;
        b = c;
        cout << endl
             << "Value of a : " << a;
        cout << endl
             << "Value of b : " << b;
    }
};

int main()
{
    int a, b;
    cout << "Enter value of a : ";
    cin >> a;
    cout << "Enter value of b : ";
    cin >> b;
    swaping<int> swp(a, b);
    return 0;
}