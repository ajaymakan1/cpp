//Write a program to find the sum of the even and odd digits of the number which is given as input.
#include<iostream>
using namespace std;
int main(){
int num,sum=0,t=0,r;
cin>>num;
while (num>0){
r=num%10;
num=num/10;
if (r%2==0){
sum=sum+r;
}
else if (r%2!=0)
t=t+r;
}
cout<<sum<< " even digit sum"<<endl;
cout<<t<< " odd digits sum"<<endl;
}
