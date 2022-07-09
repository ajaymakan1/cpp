//Take integer inputs from user until he/she presses q ( Ask to press q to quit after every integer input ). Print average and product of all numbers.

#include<iostream>
using namespace std;
int main(){
    int num,n,count=0,t=1 ; float d=0;
    cin>>n;
    if (num =='q'){
    exit ;}
    else{
for (int i=1;i<=n;i++){
    cin>>num;
    count=count+1;
 d=d+num;
t=t*num;}}
 cout<<d<<endl;

cout<<"average is " <<(d/count)<<endl;
cout<< "product is " << t << endl;
}