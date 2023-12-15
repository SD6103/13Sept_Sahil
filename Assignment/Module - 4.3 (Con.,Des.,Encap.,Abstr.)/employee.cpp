// Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. Include member functions to calculate and set salary based on employee performance. Using of constructor

#include <iostream>
using namespace std;

class employee
{
    string name;
    int emp_id, salary, performance;

public:
    employee()
    {
        cout << "Enter Employee id : ";
        cin >> emp_id;

        cout << "Enter Employee Name : ";
        cin >> name;

        cout << "Enter Performance : ";
        cin >> performance;

        if (performance >= 70)
        {
            salary = 100000;
        }
        else if (performance >= 60)
        {
            salary = 80000;
        }
        else if (performance >= 50)
        {
            salary = 60000;
        }
        else if (performance >= 40)
        {
            salary = 40000;
        }
        else
        {
            salary = 20000;
        }
    }

    void print_data()
    {
        cout << endl
             << "Employee ID : " << emp_id;
        cout << endl
             << "Employee Name : " << name;
        cout << endl
             << "Salary : " << salary;
    }
};

int main()
{
    employee emp;
    emp.print_data();
}