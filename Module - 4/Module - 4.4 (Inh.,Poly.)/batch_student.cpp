// Assume that the test results of a batch of students are stored in three different classes. Class Students are storing the roll number. Class Test stores the marks obtained in two subjects and class result contains the total marks obtained in the test. The class result can inherit the details of the marks obtained in the test and roll number of students. (Multilevel Inheritance)

#include <iostream>
using namespace std; // library file

class student // class calling
{
public:
    // data member
    int roll_no;
    void get_no(int roll_no)
    {
        this->roll_no = roll_no;
    }
};

class test : public student // class creation
{
public:
    // data member
    int sub_1, sub_2;

    void get_marks(int sub1, int sub2)
    {
        this->sub_1 = sub1;
        this->sub_2 = sub2;
    }
};

class result : public test // child class creation
{
public:
    // data member
    int total;
    float per;

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
        per = total / 2;
        cout << endl
             << "Percentage : " << per;
    }
};

int main()
{
    result res;
    res.get_no(10);        // function calling
    res.get_marks(50, 60); // function calling
    res.print_result();    // function calling
    return 0;
}