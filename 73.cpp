#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
void sort012(int arr[], int n)
{
    int i,j = 0, a = 0, b = 0, c = 0;

    while (j < n)
    {
        if (arr[j] == 0)
        {
            a = a + 1;
        }
        else if (arr[j] == 1)
        {
            b = b + 1;
        }
        else
        {
            c = c + 2;
        }
        j = j + 1;
    }

    for (int i = 0; i < a; i++)
    {
        arr[i] = 0;
        cout << arr[i] << " ";
    }

    for (int i = a; i < a + b; i++)
    {
        arr[i] = 1;
        cout << arr[i] << " ";
    }

    for (int i = a + b; i < n; i++)
    {
        arr[i] = 2;
        cout << arr[i] << " ";
    }
}
int main()
{
    int i, arr[] = {0, 1, 1, 2, 0, 1, 0, 2}, n;
    n = sizeof(arr) / sizeof(arr[0]);
    sort012(arr,n);
    //  for (int i = 0; i < n; i++)
    //{
    //    cout << arr[i] << " ";
    //}
    return 0;
}