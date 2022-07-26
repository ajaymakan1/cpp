
//Find the Union and Intersection of the two sorted arrays.

#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void unionarr(int arr1[] , int arr2[], int n1 , int n2){
{ 
  int i = 0, j = 0; 
  while (i < n1 && j < n2) 
  { 
    if (arr1[i] < arr2[j]) 
       cout << arr1[i++] << " "; 
      
    else if (arr2[j] < arr1[i]) 
       cout << arr2[j++] << " "; 
      
    else
    { 
       cout << arr2[j++] << " "; 
       i++; 
    } 
  } 
  
  /* Print remaining elements of the larger array */
  while(i < n1) 
     cout << arr1[i++] << " "; 
  
  while(j < n2) 
    cout << arr2[j++] << " "; 
} 
}void intersec(int arr1[] , int arr2[], int n1 , int n2)
{ 
  int i = 0, j = 0; 
  while (i < n1 && j < n2) 
  { 
    if (arr1[i] < arr2[j]) 
       i++; 
    else if (arr2[j] < arr1[i]) 
       j++; 
    else /* if arr1[i] == arr2[j] */
    { 
       cout << arr2[j] << " "; 
       i++; 
       j++; 
    } 
  } 
} 
int main(){
int arr1[] = {1,2,3,4}, arr2[] = {3,4,5,6}, n1 , n2;
    n1 = sizeof(arr1) / sizeof(arr1[0]);
    n2 = sizeof(arr2) / sizeof(arr1[0]);
    unionarr(arr1 , arr2 ,n1,n2);
    intersec( arr1 , arr2 ,n1,n2);
    

   
return 0; 
}