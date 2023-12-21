// Write a C++ Program to illustrates the use of Constructors in multilevel inheritance

#include <iostream>
using namespace std; // library file

class a // class creation
{
public:
    a() // constructor
    {
        cout << endl
             << "constructor of class a";
    }
};

class b : public a // child class creation
{
public:
    b() // constructor
    {
        cout << endl
             << "constructor of class b";
    }
};

class c : public b // child class creation
{
public:
    c() // constructor
    {
        cout << endl
             << "constructor of class c";
    }
};

int main()
{
    c c1; // object creation of base class
    return 0;
}