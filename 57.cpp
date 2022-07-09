 #include <bits/stdc++.h>
 #include<iostream>
 #include<stack>
 #include<string>
 using namespace std;
 
 class Stack{
    public:
    int* arr;
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
       int peek ()
       {
        if (top>=0){
            return arr[top];
        }
        else {
            cout << " Stack is Underflow " << endl;
            return -1;
        }
       }

       bool IsEmpty(){
        if (top==(-1)){
            return true;
        }
        else {
            return false;
        }
       }

    

 };
 int main(){
 int n;
 cout<<" Please enter th number of elements : " << endl;
 cin>>n;
 Stack st(n); 
 
 st.push(10);
 st.push(20);
 st.push(30);
st.push(40);
st.push(50);

 st.pop();
 st.pop();
 st.pop();
 cout<< " The peek element of the stack is : " << st.peek() << endl;
 if (st.IsEmpty()){
    cout<<"Stack is Empty"<<endl;
 }
 else{
    cout<<"Stack is not Empty"<<endl;
 }
 return 0; 
 }