// Write a C++ program to create a class called Car that has private member variables for company, model, and year. Implement member functions to get and set these variables.

#include <iostream>
using namespace std; // library file

class car // class calling
{
    // data member
    char company[20], model[20];
    int year;

public:
    // member function
    void get()
    {
        cout << "Enter car company name : ";
        cin >> company;
        cout << "Enter Model name : ";
        cin >> model;
        cout << "Enter year of launch : ";
        cin >> year;
    }

    // member function
    void set()
    {
        cout << endl
             << "Car company Name : " << company;
        cout << endl
             << "Model name : " << model;
        cout << endl
             << "Year of Launch : " << year;
    }
};

int main()
{
    car car;   // object
    car.get(); // function calling
    car.set(); // function calling
}