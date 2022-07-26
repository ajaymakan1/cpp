#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
   or int arr[1000], n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<" reversed array is : " ;
    for (int i = n-1 ; i >= 0; i--)
    {
       cout<< arr[i] << " ";
    }
    cout<< endl;
    return 0;
}