#include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int queue[100], N = 100, front = - 1, rear = - 1;
void enqueue(int x){
    if (rear == N-1){
        cout<<"Queue is Full"<<endl;
    }
    else if(front == -1 && rear == -1 ){
        front = rear =0;
        queue[rear]=x;
    }
    else{
        rear++;
    queue[rear]= x;
    }
    
}
void dequeue(){
    if (rear == -1 && front == -1){
        cout<< "Queue is empty"<<endl;
    }
    else if{
        if(rear==front){
            front=rear=-1;
        }
    }
    else{
        cout<<"Deleted element is : " << queue[front]<<endl;
        front++;

    }
}
void Display(){
    if (front == -1 && rear == -1){
        cout<< " Queue is empty " <<endl;
        else if{
            for(int i = front ; i<rear-1;i++){
                cout<<queue[i] << " " <<endl;
            }
        }
    }
}
void peek(){
     if (front == -1 && rear == -1){
        cout<< " Queue is empty " <<endl;
}
else {
    cout<<queue[front]<<endl;
}
}

int main(){
    
    enqueue(10);
     enqueue(2);
      enqueue(4);
      Display();
      peek();
       dequeue();
       peek();
       dequeue();

return 0; 
}