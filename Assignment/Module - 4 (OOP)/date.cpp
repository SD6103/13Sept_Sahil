// Write a C++ program to implement a class called Date that has private member variables for day, month, and year. Include member functions to set and get these variables, as well as to validate if the date is valid.

#include <iostream>

using namespace std;

class date
{
    int day, month, year;

public:
    void get()
    {
        cout << "Enter a day : ";
        cin >> day;
        cout << "Enter a month : ";
        cin >> month;
        cout << "Enter a year : ";
        cin >> year;
    }

    void set()
    {
        cout << "Date : " << day << " - " << month << " - " << year;
    }

    void validate()
    {
        if (day < 1 || day > 31)
        {
            cout << "Day is invalid";
        }
    }
};

int main()
{
    date date;
    date.get();
    date.set();
}