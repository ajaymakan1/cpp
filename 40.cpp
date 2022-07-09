#include <iostream>
#include <string>
using namespace std;

class employee
{
    int id;
    string name;

public:
    void getdata(string a, int b)
    {
        name = a;
        id = b;
    }
    void display(void)
    {
        cout << name << "\t" << id << endl;
    }
 employee(){}
};
 class pro : public employee{
    public:
    int t;
    void roll(int roll_no){
        t= roll_no;
          cout<<t<<endl;
        
    }

 };

int main()
{
    string c;
    int d , e;
    cin >> c >> d>>e;

    employee ajay;
    pro p;
    ajay.getdata(c, d);
    ajay.display();
p.roll(e);

    return 0;
}