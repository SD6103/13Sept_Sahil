// Write a Program of Two 1D Matrix Addition using Operator Overloading
#include <iostream>
using namespace std;

class matrix
{
public:
    // data member
    int s1[5];
    int i;

    // member function to get array elements
    void get()
    {
        cout << "Enter array elements: ";
        for (i = 0; i < 5; i++)
        {
            cin >> s1[i];
        }
    }

    // operator overloading for addition
    matrix operator+(matrix &m2)
    {
        matrix m3;
        for (int i = 0; i < 5; i++)
        {
            m3.s1[i] = s1[i] + m2.s1[i];
        }
        return m3;
    }

    // function to display array elements
    void display()
    {
        cout << "Addition: ";
        for (int i = 0; i < 5; i++)
        {
            cout << s1[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    matrix M1, M2, M3; // variable

    cout << "Enter elements for the first matrix:" << endl;
    M1.get(); // get value for first array

    cout << "Enter elements for the second matrix:" << endl;
    M2.get(); // get value for second array

    // Adding two matrices
    M3 = M1 + M2;

    // Displaying the result
    M3.display();

    return 0;
}
