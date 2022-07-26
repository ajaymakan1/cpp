#include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<stack>
using namespace std;

class Stack{
    int data;
    int *arr;
    int top;
    int size;

      Stack (int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
        }
          void push(int element){
        if(size-top > 1){
            top ++;
            arr[top]=element;
        }
        else {
            cout<< " Stack is Overflow " << endl;
        }
       }
       void pop(){
        if(top>=0){
            top--;
       }
       else {
    cout<< " Stack is Underflow " << endl;
       }
       }
};
int main(){
int n;
 cout<<" Please enter the number of elements : " << endl;
 cin>>n;
 Stack st(n); 
 int t;
 for (int i = 0 ; i<n;i++){
    cin>>t;
    st.push(t);
 }
  for (int i = 0 ; i<n;i++){
   cout<< st.pop() << endl;
 }
return 0; 
}