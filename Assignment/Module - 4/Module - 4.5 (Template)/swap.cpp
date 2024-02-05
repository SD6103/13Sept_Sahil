// Write a program of to swap the two values using template
#include <iostream>
using namespace std;
template <typename T>

class Swapper
{
public:
    // Constructor without member initializer list
    Swapper(T &a, T &b)
    {
        T c = a;
        a = b;
        b = c;
    }
};

int main()
{
    int x = 5, y = 10;
    cout << "Before swapping: " << x << " " << y << endl;

    // Swap the values of x and y using the swapValues template function
    Swapper<int>(x, y);

    cout << "After swapping: " << x << " " << y << endl;

    return 0;
}
