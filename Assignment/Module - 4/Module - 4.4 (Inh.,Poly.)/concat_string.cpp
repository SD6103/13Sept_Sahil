// Write a program to concatenate the two strings using Operator Overloading

#include <iostream>
#include <string>

using namespace std; // library file

class Concat // class creation
{
public:
    // data member
    string str;

    // member function
    void get_string(string str)
    {
        this->str = str;
    }

    // member function
    void show_string()
    {
        cout << "New String : " << str;
    }

    // Operator Overloading with + operator
    Concat operator+(Concat &obj2)
    {
        Concat obj3;
        obj3.str = str + obj2.str;
        return obj3;
    }
};

int main()
{
    // objects
    Concat c1;
    Concat c2;
    Concat c3;
    c1.get_string("ABC"); // get first string with first object
    c2.get_string("XYZ"); // get second string with second object
    c3 = c1 + c2;         // concat strings with + operator
    c3.show_string();     // function calling
    return 0;
}