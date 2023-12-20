// Write a C++ Program to show access to Private Public and Protected using Inheritance

#include <iostream>
using namespace std;

class access
{
private:
    int a; // can't access private property out side of class

public:
    int b;

protected:
    int c;
};

class test : public access
{
public:
    void print()
    {
        cout << "b : I'm Public Property.";
    }
};

class demo : virtual access
{
public:
    void print()
    {
        cout << endl
             << "c : I'm Protected property.";
    }
};

int main()
{
    test t;
    t.print();
    demo d;
    d.print();
}