#include <iostream>
#include <string>
using namespace std;
void print(int array[], int n)
{
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
}
void Insertionsort(int array[], int n)
{
    int hole, value;
    for (int i = 0; i < n; i++)
    {
        value = array[i];
        hole = i;

        while (hole > 0 && array[hole - 1] > value)
        {
            array[hole] = array[hole - 1];
            hole = hole - 1;
        }
        array[hole] = value;
    }
}
    int main()
    {
        int array[1000], n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        Insertionsort(array, n);
        print(array, n);

        return 0;
    }
