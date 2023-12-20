// Write a C++ program to create a class called Rectangle that has private member variables for length and width. Implement member functions to calculate the rectangle's area and perimeter.

#include <iostream>

using namespace std; // library file

class Rectangle
{
    // data member
    int length, width;

public:
    // member function
    int area(int l, int w)
    {
        this->length = l;
        this->width = w;
        cout << "Area : " << this->length * this->width;
        return 0;
    }

    // member function
    int perimeter(int l, int w)
    {
        this->length = l;
        this->width = w;
        cout << endl
             << "Perimeter : " << 2 * (this->length + this->width);
        return 0;
    }
};

int main()
{
    int length, width; // variable
    cout << "Enter length of rectangle : ";
    cin >> length;
    cout << "Enter width of rectangle : ";
    cin >> width;

    Rectangle rect;                // object
    rect.area(length, width);      // function calling
    rect.perimeter(length, width); // function calling
}