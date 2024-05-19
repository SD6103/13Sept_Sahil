// Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.

#include <iostream>
using namespace std; // library file

class person
{
    // data member
    char name[20], country[20];
    int age;

public:
    // member function
    void get()
    {
        cout << "Enter Your name : ";
        cin >> name;
        cout << "Enter your age : ";
        cin >> age;
        cout << "Enter Your country : ";
        cin >> country;
    }

    // member function
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
    person per; // creating object
    per.get();  // function calling
    per.set();  // function calling
}