//Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a 
//class named 'Rectangle' with a function named 'Area' which returns the area. 
//Length and breadth are passed as parameters to its constructor.


#include<iostream>
#include<math.h>
using namespace std;

class CRectArea
{
    private:
        int length;
        int breadth;
    public:
        CRectArea (int,int);

        int areaofrect ()
        {
            return (length * breadth);
        }
        int length1()
        {
            return length;
        }

        int breadth1()
        {
            return breadth;
        }
};


CRectArea::CRectArea(int x, int y)
{
    length = x;
    breadth = y;
}


int main ()
{
    CRectArea myrectangle (2,2);

    cout<<"The Length of Rectangle :: "<<myrectangle.length1()<<"\n";
    cout<<"\nThe Breadth of Rectangle :: "<<myrectangle.breadth1()<<"\n";
    cout << "\nThe area of rectangle is :: " << myrectangle.areaofrect()<< endl;
    return 0;
}