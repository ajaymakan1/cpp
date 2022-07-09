#include <iostream>
#include <string>
using namespace std;

void Insertionsort(int array[], int size)
{

    int i, j, min_idx,temp;
    
    //Loop to iterate elements of array. 
    for (i = 0; i < size-1; i++)  
    {  
        //Here we try to find the min element in array. 
        min_idx = i;  
        for (j = i+1; j < size; j++){
            if (array[j] < array[min_idx])  
                min_idx = j;  
        }
        
        // Here we interchange the min element with first one.              
        temp = array[min_idx];
        array[min_idx] = array[i]; 
        array[i] = temp;
    }
  /*
    for (int i = 0; i < n - 1; i++)
    {
        int imin = i;
        for (int j = i + 1; j < n; j++)
        { 
            if (A[j] < A[imin])
        {
            imin = j;
        
        
        int temp = A[i];
        A[i] = A[imin];
        A[imin] = temp;
    }}
}
}*/
}
int main()
{
    int array[100];

    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
    };
    
    Insertionsort(array, n);
    print(array, n);
    return 0;
}