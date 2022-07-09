#include <bits/stdc++.h>
#include<iostream>
#include<stack>
#include<string>
using namespace std;
void solve(int stack<int>&inputstack, int size  , int count){
    if (count==n/2){
        inputstack.pop();
return;
    }
    int num = inputstack.top();
    inputstack.pop();

    solve(inputstack, size , count+1);
    inputstack.push(num);
}
int main(){stack<int>inputstack={2,4,6 ,8,10};
Deletem(int stack<int>&inputstack, int 5){

    int count =0;
    solve(inputstack,n,count);


   
  

return 0; 
}
}