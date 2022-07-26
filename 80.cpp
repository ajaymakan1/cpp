#include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main(){
int a[1000],n;
cin>>n;
int count = 0 ;
for(int i = 0 ; i<n ;i++){
    cin>>a[i];
}
int t=1;
for(int i =0 ; i<n-1 ; i++ ){
    t = a[i]*a[i+1];
    if(t>20){
        t=1;
        count++;
    }
}
if(t<=20){
    count++;
}
cout<<count;

return 0; 
}