#include <iostream>
#include <string>
using namespace std;

class employee
{
public:
    string name;
    int id;
    int salary;

    void getname(void)
    {
        cout << "Enter the name of an employee : ";
        cin >> name;
        cout << endl;
    }

    void setid(void)
    {
        cout << "Enter the id : ";
        cin >> id;
        cout << endl;
    }

    void getsalary(void)
    {
        cout << "Enter the salary : ";
        cin >> salary;
        cout << endl;
    }
    void get(void)
    {
        cout << name << "\t";
        cout << id << "\t";
        cout << salary << "\t";
    }
};

int main()
{
    int n;
    cin >> n;
    employee tcs[n];
    for (int i = 0; i < n; i++)
    {
        tcs[i].getname();
        tcs[i].setid();
        tcs[i].getsalary();
        cout << endl;
        tcs[i].get();
    }
}