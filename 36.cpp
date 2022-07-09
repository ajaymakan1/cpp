/*Write a program to print the area of a rectangle by creating a class named 'Area' taking the values of
its length and breadth as parameters of its constructor and having a function named 'returnArea'
which returns the area of the rectangle. Length and breadth of the rectangle are entered through keyboard.*/

#include <iostream>
#include <string>
using namespace std;

class Area
{
    int a, b;

public:
     Area(void);
    void returnArea(void)
    {
        cout << a * b << endl;
    }
};

Area :: Area(void)
{
    a = 5;
    b = 4;
}

int main()
{
    Area re;
    re.returnArea();

    return 0;
}