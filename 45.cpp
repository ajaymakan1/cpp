/*Make a class named Fruit with a data member to calculate the number of fruits in a basket.
 Create two other class named Apples and Mangoes to calculate the number of apples and mangoes in the basket.
  Print the number of fruits of each type and the total number of fruits in the basket.*/

#include <iostream>
#include <string>
using namespace std;

class Fruits
{
protected:
public:
    int data;
    void getgata(int a) 
    {    data=a;
        cout << " Total number of fruits in a basket are : " << data << endl;
    }
};

class Apples : public Fruits
{
protected:
public:
    int data1;
    void getdata1(int b) 
    {   data1=b;
        cout << " Total number of Apples in the basket are : " << data1 << endl;
    }
};

class Mangoes : public Fruits
{
protected:
public:
    int data2;
    void getdata2(int c) 
    {   data2=c;
        cout << " Total number of Mangoes in the basket are : " << data2 << endl;
    }
};
int main()
{
    Fruits f;
    Apples A;
    Mangoes M;
    f.getgata(10);
    A.getdata1(4);
    M.getdata2(6);
    A.getgata(10);
    M.getgata(20);
    return 0;
}
