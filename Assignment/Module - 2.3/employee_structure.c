// Write a program of structure employee that provides the following information -print and display empno, empname, address and age

#include <stdio.h>
struct employee
{
    int emp_no, age;
    char emp_nm[20], add[100];
} emp;

void main()
{
    printf("Enter Employee Number : ");
    scanf("%d", &emp.emp_no);
    printf("Enter Employee Name : ");
    scanf("%s", &emp.emp_nm);
    printf("Enter Address : ");
    scanf("%s", &emp.add);
    printf("Enter Age : ");
    scanf("%d", &emp.age);

    printf("Employee Number : %d\n", emp.emp_no);
    printf("Employee Name : %s\n", emp.emp_nm);
    printf("Address : %s\n", emp.add);
    printf("Age : %d", emp.age);
}