#include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main(){
int a[1000] , n ; 
cin>>n;
for(int t=0;t<n;t++){
    cin>>a[t];
}
for(int i = 0 ; i<n ; i++){
    int f=a[i];
    for(int j= i+1 ; j<n ;j++){
    if (a[j]==a[i]) 
      cout<<a[i]<<" ";  
    }
}
return 0; 
}