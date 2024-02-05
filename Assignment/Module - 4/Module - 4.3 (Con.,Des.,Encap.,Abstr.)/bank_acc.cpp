// Write a C++ program to implement a class called Bank Account that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.

#include <iostream>

using namespace std; // library file

class bank_account // creating class
{
    // data member
    int acc_no, balance, diposite_amt, withdraw_amt;

public:
    // member function
    void get_data()
    {
        cout << "Enter Account Number : ";
        cin >> acc_no;
        cout << "Enter amount : ";
        cin >> balance;
    }

    // member function
    void diposite()
    {
        cout << "Enter amount you want to diposite : ";
        cin >> diposite_amt;
        balance = balance + diposite_amt;
    }

    // member function
    void withdraw()
    {
        cout << "Enter amount you want to withdraw : ";
        cin >> withdraw_amt;
        if (withdraw_amt > balance)
        {
            cout << "You have no Money as much as you want to withdraw";
        }
        else
        {
            balance = balance - withdraw_amt;
        }
    }
};

int main()
{
    int choice;            // variable
    bank_account bank_acc; // object
    bank_acc.get_data();   // function calling
    cout << "What you want to do : " << endl
         << "1. Diposite" << endl
         << "2. Withdraw : ";
    cin >> choice;

    // switch case
    switch (choice)
    {
    case 1:
        bank_acc.diposite();
        break;

    case 2:
        bank_acc.withdraw();
        break;

    default:
        cout << "Invalid Choice";
        break;
    }

    return 0;
}