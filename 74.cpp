
// Move all the negative elements to one side of the array

#include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

void move_negative(int arr[] , int n)
{ int j=0;

for (int i = 0 ; i<n ; i++){
    if (arr[i]<0)
    { if (i != j)
        swap(arr[i],arr[j]);
        j++;
    }
}

}


int main(){
 int i, arr[] = {0, 9, 3, -2, -1, 4, -5, 7}, n;
    n = sizeof(arr) / sizeof(arr[0]);
    move_negative(arr,n);
    for (int i = 0 ; i < n; i++)
    {
       cout<< arr[i] << " ";
    }
return 0; 
}