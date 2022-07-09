/*Factorial of any number n is represented by n! and is equal to 1*2*3*....*(n-1)*n. E.g.-
4! = 1*2*3*4 = 24
3! = 3*2*1 = 6
2! = 2*1 = 2
Also,
1! = 1
0! = 0
Write a C++ program to calculate factorial of a number.*/

#include<iostream>
using namespace std;
int main(){
int n,a=1;
cin>>n;
if (n<=0){
cout<<"0";}
else{
for(int i=1;i<=n;i++){
a=a*i;
}

cout<<a;
}}