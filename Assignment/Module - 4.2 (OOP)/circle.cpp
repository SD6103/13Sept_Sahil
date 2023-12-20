/*
Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.
*/

#include <iostream>
using namespace std; // library file

class circle
{
    int radius; // data member

public:
    // member function
    void area()
    {
        cout << "Enter radius of circle : ";
        cin >> radius;

        float area = 3.14 * radius * radius;

        cout << "Area of circle : " << area;
    }

    // member function
    void circumference()
    {
        cout << endl
             << "Enter radius of circle : ";
        cin >> radius;

        float circumference = 2 * 3.14 * radius;

        cout << "circumference of circle : " << circumference;
    }
};

int main()
{
    circle cir;          // creating object
    cir.area();          // function calling
    cir.circumference(); // functino calling
    return 0;
}