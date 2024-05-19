// Write a C++ Program to find Area of Rectangle using inheritance

#include <iostream>
using namespace std; // library file

class Rectangle // class creation
{
public:
    // data member
    int area, length, width;
};

class rect_area : public Rectangle // child class creation
{
public:
    // member function
    rect_area()
    {
        cout << "Enter length of Rectangle : ";
        cin >> length;

        cout << "Enter Width of Rectangle : ";
        cin >> width;
    }

    // member fucntion
    void cal_area()
    {
        area = length * width;
        cout << "Area of Rectangle : " << area;
    }
};

int main()
{
    rect_area area;  // object
    area.cal_area(); // function calling
}