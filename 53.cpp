#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int partition(int arr[], int start, int end)
{
    int pivot, pindex;
    pivot = arr[end];
    pindex = start;
    for (int i = start; i < end; i++)
    {
        if (arr[i] <= pivot)
        {
            swap(arr[i], arr[pindex]);
            pindex = pindex + 1;
        }
    }
    swap(arr[pindex], arr[end]);
    return pindex;
}
void quicksort(int arr[], int start, int end)
{
    if (start < end)
    {
        int pindex = partition(arr,start,end);
        quicksort(arr,start,pindex-1);
        quicksort(arr , pindex+1 ,end);
    }
}
void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
}

int main()
{
    int arr[] = {9, 7, 8, 3, 2, 1};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is \n";
    printArray(arr, arr_size);

    quicksort(arr, 0, arr_size - 1);

    cout << "\nSorted array is \n";
    printArray(arr, arr_size);
    return 0;
}