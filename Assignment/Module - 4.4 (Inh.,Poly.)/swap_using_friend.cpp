// Write a program to swap the two numbers using friend function without using third variable

#include <iostream>
using namespace std;

class swaping
{
    int a, b;

public:
    friend int swp_no(swaping &obj);
};

int swp_no(swaping &obj)
{
    cout << "Enter number 1 : ";
    cin >> obj.a;
    cout << "Enter number 2 : ";
    cin >> obj.b;
    obj.a = obj.a + obj.b; // a = 10 + 20 = 30
    obj.b = obj.a - obj.b; // b = 30 - 20 = 10
    obj.a = obj.a - obj.b; // a = 30 - 10 = 20

    cout << "After swaping";
    cout << endl
         << "Number 1 : " << obj.a;
    cout << endl
         << "Number 2 : " << obj.b;
}

int main()
{
    swaping s1;
    swp_no(s1);
    return 0;
}