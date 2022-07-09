
#include <iostream>
#include <string>
using namespace std;
class item
{
public:
    int id;
    float price;
    void setdata(int a, int b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << "Id of the item is : " << id << endl;
        cout << "Price of the item is : " << price << endl;
    }
};

int main()
{
    int i, size, p;
    cout << "Enter the number of items : " << endl;
    cin >> size;
    float q;
    item *ptr = new item[size];
    item *nptr = ptr;
    for (i = 0; i < size; i++)
    {
        cout << "Enter the Id and Price of the item " << i + 1 << endl;
        cin >> p >> q;
        ptr->setdata(p, q);
        ptr++;
    }
    for (i = 0; i < size; i++)
    {
        cout << "Item number " << i + 1 << endl;
        nptr->getdata();
        nptr++;
    }
    return 0;
}