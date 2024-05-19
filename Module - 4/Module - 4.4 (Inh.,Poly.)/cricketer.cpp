// Assume a class cricketer is declared. Declare a derived class batsman from cricketer. Data member of batsman. Total runs, Average runs and best performance. Member functions input data, calculate average runs, Display data. (Single Inheritance)

#include <iostream>

using namespace std; // library file

class cricketer // class creaion
{
public:
    // data member
    string name, team;

    // member function
    int get_data()
    {
        cout << "Enter Batsman name : ";
        cin >> name;
        cout << "Enter Team : ";
        cin >> team;
    }
};

class batsman : public cricketer // child class creation
{
public:
    // data member
    int total_run, total_match, avg_run, best_perform;

    // member function
    int get_details()
    {
        cout << "Enter Total run of Batsman : ";
        cin >> total_run;
        cout << "Enter Total Match of Batsman : ";
        cin >> total_match;
        cout << "High score : ";
        cin >> best_perform;
    }

    // member function
    int avg()
    {
        avg_run = total_run / total_match;
        return 0;
    }

    // member function
    int print_details()
    {
        cout << endl
             << "Batsman Name : " << name;
        cout << endl
             << "Team Name : " << team;
        cout << endl
             << "Total Runs : " << total_run;
        cout << endl
             << "Best Performance : " << best_perform;
        cout << endl
             << "Average Runs : " << avg_run;
    }
};

int main()
{
    batsman bat; // object
    // function calling
    bat.get_data();
    bat.get_details();
    bat.avg();
    bat.print_details();
    return 0;
}