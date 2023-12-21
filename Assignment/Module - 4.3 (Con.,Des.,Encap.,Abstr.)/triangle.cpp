// Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.

#include <iostream>
using namespace std; // library file

class triangle // class creation
{
    // data member
    int side1, side2, side3;

public:
    // member function
    void check_triangle(int a, int b, int c)
    {
        side1 = a;
        side2 = b;
        side3 = c;
        if (side1 == side2 && side2 == side3 && side3 == side1)
        {
            cout << "Triangle is equilateral.";
        }
        else if (side1 == side2 || side2 == side3 || side1 == side3)
        {
            cout << "Triangle is isosceles.";
        }
        else
        {
            cout << "Triangle is scalene.";
        }
    }
};

int main()
{
    int sideA, sideB, sideC; // variable
    cout << "Enter Side A : ";
    cin >> sideA;
    cout << "Enter Side B : ";
    cin >> sideB;
    cout << "Enter Side C : ";
    cin >> sideC;

    triangle tri; // object

    tri.check_triangle(sideA, sideB, sideC); // function calling
}