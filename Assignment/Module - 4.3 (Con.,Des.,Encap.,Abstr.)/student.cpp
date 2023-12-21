// Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks. Include member functions to calculate the grade based on the marks and display the student's information. Accept address from each student implement using of aggregation

#include <iostream>
using namespace std; // library file

class student // class creation
{
    // data member
    string name, address;
    char grade;
    int roll_no, std, sub_1, sub_2, sub_3, total;

public:
    // member function
    void get_data()
    {
        cout << "Enter Your roll no. : ";
        cin >> roll_no;
        cout << "Enter your name : ";
        cin >> name;
        cout << "Enter Your address : ";
        cin >> address;
        cout << "Enter Your Standard : ";
        cin >> std;
    }

    // member function
    void cal_grade()
    {
        cout << "Enter your mark of subject 1 : ";
        cin >> sub_1;
        cout << "Enter your mark of subject 2 : ";
        cin >> sub_2;
        cout << "Enter your mark of subject 3 : ";
        cin >> sub_3;

        total = sub_1 + sub_2 + sub_3;

        if (sub_1 > 100 || sub_2 > 100 || sub_3 > 100 || sub_1 < 0 || sub_2 < 0 || sub_3 < 0)
        {
            cout << "Please enter marks between 0 to 100";
        }
        else
        {

            if (total >= 250)
            {
                grade = 'A';
            }
            else if (total >= 200)
            {
                grade = 'B';
            }
            else if (total >= 150)
            {
                grade = 'C';
            }
            else if (total >= 100)
            {
                grade = 'D';
            }
            else
            {
                grade = 'F';
            }
        }
    }

    // member function
    void print_data()
    {
        cout << endl
             << "Your roll no. : " << roll_no;
        cout << endl
             << "Your Name : " << name;
        cout << endl
             << "Your Address : " << address;
        cout << endl
             << "Your Standard : " << std;
        cout << endl
             << "Mark of subject 1 : " << sub_1;
        cout << endl
             << "Mark of subject 2 : " << sub_2;
        cout << endl
             << "Mark of subject 3 : " << sub_3;
        cout << endl
             << "Your Grade : " << grade;
    }
};

int main()
{
    student stud;      // object
    stud.get_data();   // fucntion calling
    stud.cal_grade();  // function calling
    stud.print_data(); // function calling
}