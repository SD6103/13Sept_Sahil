// Write a C++ Program to find Area of Rectangle using inheritance

#include <iostream>
using namespace std;

class Rectangle
{
public:
    int area, length, width;
};

class rect_area : public Rectangle
{
public:
    rect_area()
    {
        cout << "Enter length of Rectangle : ";
        cin >> length;

        cout << "Enter Width of Rectangle : ";
        cin >> width;
    }

    void cal_area()
    {
        area = length * width;
        cout << "Area of Rectangle : " << area;
    }
};

int main()
{
    rect_area area;
    area.cal_area();
}