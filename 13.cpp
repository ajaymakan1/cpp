//Take 10 integers from keyboard using loop and print their average value on the screen.

#include<iostream>
using namespace std;
int main(){
    int num ,  sum=0;
 for(int i=1;i<=10;i++){
     cin>>num;
     sum = sum+num;

 }
 cout<<"average of numbers is :"<<(sum/10)<<endl;


}
