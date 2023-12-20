// Write a program to calculate the area of circle, rectangle and triangle using Function Overloading
// Rectangle: Area * breadth
// Triangle: ½ * Area * breadth
// Circle: Pi * Area * Area

#include <iostream>
using namespace std;

class calc_area
{
public:
    int radius, side;
    int area(int area, int breadth)
    {
        cout << endl
             << "Area of Rectangle : " << area * breadth;
    }

    int area(float a, int area, int breadth)
    {
        cout << endl
             << "Area of Triangle : " << a * area * breadth;
    }

    int area(int area)
    {
        cout << endl
             << "Area of Circle : " << 3.14 * area * area;
    }
};

int main()
{
    int a, b;
    cout << "Enter Area : ";
    cin >> a;
    cout << "Enter Breadth : ";
    cin >> b;

    calc_area area;
    area.area(a, b);
    area.area(0.5, a, b);
    area.area(a);
}