// Write a program of structure for five employee that provides the following information -print and display empno, empname, address and age

#include <stdio.h>
#include <string.h>

struct employee // creating a structure of emoloyyee
{
    int emp_no;       // data member
    char emp_nm[20];  // data member
    char emp_add[20]; // data member
    int emp_age;      // data member
} emp[20];            // object

void main() // main function
{
    int i;                   // variable
    for (i = 1; i <= 5; i++) // for loop
    {
        printf("\nEnter Details of Employee %d :", i); // getting details of employees

        printf("\nEnter Employee number : ");
        scanf("%d", &emp[i].emp_no);

        printf("Enter Employee Name : ");
        scanf("%s", &emp[i].emp_nm);

        printf("Enter Employee Address : ");
        scanf("%s", &emp[i].emp_add);

        printf("Enter Employee Age : ");
        scanf("%d", &emp[i].emp_age);
    }

    for (i = 1; i <= 5; i++) // for loop
    {
        printf("\n\nDetails of Employee %d :", i); // printing details of employees
        printf("\nEmployee No : %d", emp[i].emp_no);
        printf("\nEmployee Name : %s", emp[i].emp_nm);
        printf("\nEmployee Address : %s", emp[i].emp_add);
        printf("\nEmployee Age : %d", emp[i].emp_age);
    }
}
