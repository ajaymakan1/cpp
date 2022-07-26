
// find Largest sum contiguous Subarray

#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

void maxsum(int arr[], int n)
{
    int maxi = 0, cur = 0;
    for (int i = 0; i < n; i++)
    {
        cur = cur + arr[i];
        cur = max(cur, 0);
        maxi = max(maxi, cur);
    }
    cout << maxi << endl;
}
int main()
{
    int arr[] = {-2, 3, 4, -1}, n;
    n = sizeof(arr) / sizeof(arr[0]);
    maxsum(arr, n);
    return 0;
}