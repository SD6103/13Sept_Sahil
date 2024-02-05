// Write a program to swap the two numbers using friend function without using third variable

#include <iostream>
using namespace std; // library file

class swap_no // class creation
{
private:
    int no1, no2; // data member

public:
    swap_no(int a, int b) // peramerterized constructor
    {
        no1 = a; // assign the value of a to no1
        no2 = b; // assign the value of b to no2
    }

    friend int swap(swap_no &sn); // friend function creation

    void display_no()
    {
        cout << "Numbers after swapping: " << no1 << " " << no2 << endl;
    }
};

int swap(swap_no &sn) // friend function
{
    // main logic of swap
    sn.no1 = sn.no1 + sn.no2;
    sn.no2 = sn.no1 - sn.no2;
    sn.no1 = sn.no1 - sn.no2;
}

int main()
{
    int num1, num2; // variables
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    swap_no sn(num1, num2); // object creation
    cout << "Numbers before swapping: " << num1 << " " << num2 << endl;

    swap(sn);        // friend function calling
    sn.display_no(); // display function calling

    return 0;
}
