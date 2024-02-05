// Assume that the test results of a batch of students are stored in three different classes. Class Students are storing the roll number. Class Test stores the marks obtained in two subjects and class result contains the total marks obtained in the test. The class result can inherit the details of the marks obtained in the test and roll number of students. (Multilevel Inheritance)

#include <iostream>
using namespace std; // library file

class student // class calling
{
public:
    // data member
    int roll_no;
};

class test : public student // class creation
{
public:
    // data member
    int sub_1, sub_2;
};

class result : public test // child class creation
{
public:
    // data member
    int total;

    // member function
    int get_result()
    {
        cout << "Enter roll no : ";
        cin >> roll_no;
        cout << "Enter Mark of subject 1 : ";
        cin >> sub_1;
        cout << "Enter Mark of subject 2 : ";
        cin >> sub_2;
    }

    // member functino
    int print_result()
    {
        cout << endl
             << "Roll No. : " << roll_no;
        cout << endl
             << "Mark of Subject 1 : " << sub_1;
        cout << endl
             << "Mark of subject 2 : " << sub_2;
        total = sub_1 + sub_2;
        cout << endl
             << "Total Marks : " << total;
    }
};

int main()
{
    result res;         // object
    res.get_result();   // function calling
    res.print_result(); // function calling
    return 0;
}