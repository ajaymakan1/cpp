
// rite a program to cyclically rotate an array by one.

#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

void cycrotate(int arr[], int n)
{
    int temp = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
        arr[i] = arr[i - 1];
        arr[0] = temp;
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {2, 3, 4, 1}, n;
    n = sizeof(arr) / sizeof(arr[0]);arr1[] = {1,2,3,4}, arr2[] = {3,4,5,6}, n1 , n2;
    n1 = sizeof(arr1) / sizeof(arr1[0]);
    cycrotate(arr, n);
    return 0;
}