// Write a program to swap the two numbers using friend function without using third variable

#include <iostream>
using namespace std; // library file

class swap_no // class creation
{
private:
    int no; // data member

public:
    friend int swap(swap_no &obj, swap_no &obj2); // friend function creation
};

int swap(swap_no &obj1, swap_no &obj2) // friend function
{
    obj1.no = 10;
    obj2.no = 20;
    obj1.no = obj1.no + obj2.no;
    obj2.no = obj1.no - obj2.no;
    obj1.no = obj1.no - obj2.no;

    cout << "Swap Value : " << obj1.no << " " << obj2.no;
}

int main()
{
    swap_no s1;
    swap_no s2;
    swap(s1, s2);
    return 0;
}
