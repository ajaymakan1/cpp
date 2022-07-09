/*
Write a program by creating an 'Employee' class having the following functions and print the final salary.
1 - 'getInfo()' which takes the salary, number of hours of work per day of employee as parameters
2 - 'AddSal()' which adds $10 to the salary of the employee if it is less than $500.
3 - 'AddWork()' which adds $5 to the salary of the employee if the number of hours of work per day is more than 6 hours.
*/

#include <iostream>
#include <string>
using namespace std;

class employee
{
    int salary, hrs;

public:
    void getinfo(int a, int b)
    {
        salary = a;
        hrs = b;
    }
    void addsal(int a)
    {
        if (a > 500)
        {
            cout << salary << endl;
        }
        else
        {
            cout << salary + 10 << endl;
        }
    }
    void addwork(int b)
    {
        if (b < 6)
        {
            cout << salary << endl;}
            else
            {
                cout << salary + 5 << endl;
            }
        }
    };

int main()
{
    int x, y;
    cin >> x >> y;
    employee ams;
    ams.getinfo(x, y);
    ams.addsal(x);
    ams.addwork(y);
    return 0;
}