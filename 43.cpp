#include <iostream>
#include <string>
using namespace std;

class simplec
{
protected:
    float g, h;

public:
    void setdata(int a, int b)
    {
        g = a;
        h = b;
    }
    void processdata()
    {
        cout << "Sum of the numbers is :" << g + h << endl;
        cout << "Sub of the numbers is :" << g - h << endl;
        cout << "Mul of the numbers is :" << g * h << endl;
        cout << "Div of the numbers is :" << g / h << endl;
    }
};

class scientific
{
protected:
    float x , y;

public:
    void setdata1(int p, int q)
    {
        x = p;
        y = q;
    }
    void processdata1()
    {
        cout << "Square of the numbers are :" << x * x << " " << y * y << endl;
        cout << "Cube  of the numbers are :" << x * x * x << " " << y * y * y << endl;
        cout << "Sum  of the square of the numbers is :" << (x * x) + (y * y) << endl;
        cout << "Sum of the cube of the numbers is :" << (x * x * x) + (y * y * y) << endl;
    }
};

class hybridc : public simplec, public scientific {
    public:
   
    void display(){
         cout << "Entered number is :" << g << endl;
         cout << "Entered number is :" << h << endl;
    }
};

int main()
{
    hybridc t;
    t.setdata(2,4);
    t.setdata1(2,4);
    t.processdata();
    t.processdata1();
    t.display();  
    return 0;
}