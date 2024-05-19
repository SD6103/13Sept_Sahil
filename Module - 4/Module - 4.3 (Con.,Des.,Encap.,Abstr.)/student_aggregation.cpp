// // Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks. Include member functions to calculate the grade based on the marks and display the student's information. Accept address from each student implement using of aggregation

#include <iostream>
#include <string>
using namespace std;

// Define the Address class
class Address
{
private:
    string address_line;
    string city;
    string state;

public:
    // Default constructor
    Address() {}

    // Constructor to initialize address information
    Address(string address_line, string city, string state)
    {
        this->address_line = address_line;
        this->city = city;
        this->state = state;
    }

    // Function to display address information
    void displayAddress()
    {
        cout << "Address: " << address_line << ", " << city << ", " << state << endl;
    }
};

// Define the class Student
class Student
{
private:
    string name;
    string studentClass;
    int rollNumber;
    int marks;
    char grade;
    Address address; // Aggregation Address object

public:
    // Constructor to initialize member variables
    Student(string name, string studentClass, int rollNumber, int marks, Address address)
    {
        this->name = name;
        this->studentClass = studentClass;
        this->rollNumber = rollNumber;
        this->marks = marks;
        this->address = address;
        calculateGrade();
    }

    // Function to calculate grade based on marks
    void calculateGrade()
    {
        if (marks >= 90)
        {
            grade = 'A';
        }
        else if (marks >= 80)
        {
            grade = 'B';
        }
        else if (marks >= 70)
        {
            grade = 'C';
        }
        else if (marks >= 60)
        {
            grade = 'D';
        }
        else
        {
            grade = 'F';
        }
    }

    // Function to display student information
    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << grade << endl;
        address.displayAddress(); // Display address
    }
};

int main()
{
    // Create Address object
    Address address1("123 Main St", "Rajkot", "Gujarat");
    Address address2("456 Elm St", "Rajkot", "Gujarat");

    // Create Student objects and display their information
    Student s1("ABC", "10", 101, 85, address1);
    Student s2("XYZ", "10", 102, 92, address2);

    // Display information of student 1
    cout << "Student 1 Information:" << endl;
    s1.displayInfo();
    cout << endl;

    // Display information of student 2
    cout << "Student 2 Information:" << endl;
    s2.displayInfo();
    cout << endl;

    return 0;
}
