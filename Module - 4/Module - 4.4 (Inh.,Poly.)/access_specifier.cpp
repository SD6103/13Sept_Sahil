// Write a C++ Program to show access to Private Public and Protected using Inheritance

#include <iostream>
using namespace std; // library file

class access // class creation
{
private:
    int a; // can't access private property out side of class

public:
    int b = 10; // public data member

protected:
    int c = 20; // protected data member
};

class test : public access // creating child class (public property can access)
{
public:
    // member function
    void print()
    {
        cout << "value of public specifier : " << b;
    }
};

class demo : virtual access // creating child class (protected property can access)
{
public:
    void print()
    {
        cout << endl
             << "value of protected specifier : " << c;
    }
};

int main()
{
    test t;    // object of first child class
    t.print(); // function calling
    demo d;    // object of second child class
    d.print(); // funntion calling
}