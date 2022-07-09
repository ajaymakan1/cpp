#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
void print(int array[], int n)
{
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
}
void Bubblesort(int array[], int n)
{
    for (int j = 0; j < n ; j++)
    {

        for (int i = 0; i < n - 1; i++)
        {
            if (array[i] > array[i + 1])
                swap(array[i], array[i + 1]);
        }
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
    Bubblesort(array, n);
    print(array, n);
    return 0;
}