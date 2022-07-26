#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int exercise(int A[] , int N , int E){
    int i;
    for(int i = 0 ; i < N ; i++){
        if(A[i]==E)
        {
            return 1;
        }
    }

    int sum =0;
    int ans =0;
    int ans1=0;
    for(int i=0; i<N; i++){
         sum = sum + A[i]; 
         if(sum >=E){
            ans = i+1;
            return ans;
        }
    }

    sum =0;
    for(int i =0; i<N; i++){ 
        sum = sum + A[i]; 
        if(2*sum >= E){
            ans1 = 2*(i+1);
            return ans1;
        }
    }
    return -1;
    


}
int main()
{
    int E, N, A[1000];
    cin >> E;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
     int ans = exercise(A , N , E);
     cout<< ans <<endl;
        return 0;
}