/*
Define a class to represent a bank account. Include the following members:
Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account

Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance
*/

#include <iostream>
using namespace std; // library file

class bank // creating class
{
public:
    // data member
    char name[20], acc_type[20];
    int acc_no, balance, diposite_amt, withdraw_amt, choice;

    // member function
    void values()
    {
        cout << "Enter your Name : ";
        cin >> name;
        cout << "Enter Account Number : ";
        cin >> acc_no;
        cout << "Enter Account Type : ";
        cin >> acc_type;
        cout << "Enter Amount : ";
        cin >> balance;
    }

    // member function
    void deposite()
    {
        cout << "Please enter amount you want to deposite : ";
        cin >> diposite_amt;
        balance = balance + diposite_amt;
        cout << "Your account balance : " << balance;
    }

    // member function
    void withdraw()
    {
        cout << "Enter amount you want to withdraw : ";
        cin >> withdraw_amt;

        if (balance < withdraw_amt)
        {
            cout << "You have no money as much as you want to withdraw";
        }
        else
        {
            balance = balance - withdraw_amt;
            cout << "Your account balance : " << balance;
        }
    }

    // member function
    void disp_balance()
    {
        cout << "Your name is " << name << " your account balance is " << balance;
    }
};

int main()
{
    bank bank_obj;     // creating object of class
    bank_obj.values(); // call the fucntion of class using object
    cout << "What you want to do :" << endl
         << "1. Diposite" << endl
         << "2. Withdraw" << endl
         << "3. Check Balance : ";
    cin >> bank_obj.choice; // getting value from user

    // switch case
    switch (bank_obj.choice)
    {
    case 1:
        bank_obj.deposite();
        break;

    case 2:
        bank_obj.withdraw();
        break;

    case 3:
        bank_obj.disp_balance();
        break;

    default:
        cout << "Invalid choice";
        break;
    }
    return 0;
}