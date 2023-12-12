// Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.

#include <iostream>
using namespace std;

class person
{
    char name[20], country[20];
    int age;

public:
    void get()
    {
        cout << "Enter Your name : ";
        cin >> name;
        cout << "Enter your age : ";
        cin >> age;
        cout << "Enter Your country : ";
        cin >> country;
    }

    void set()
    {
        cout << endl
             << "Your name : " << name;
        cout << endl
             << "Your age : " << age;
        cout << endl
             << "Your country : " << country;
    }
};

int main()
{
    person per;
    per.get();
    per.set();
}