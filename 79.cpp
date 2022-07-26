#include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;



void villain( int hv[] , int hh , int h , int v){

int sum = 0;
for(int i = 0 ; i< v ; i++){
    sum =sum + hv[i];
    if (sum >= h*hh){
        cout<< v-i;
        break;}
        else 
        cout << " 0 ";
    
}    
}



int main(){
int v , h , hh , hv[1000] ;
cin>>v;
cin>>h;
cin>>hh;
for(int i = 0 ; i < v ; i++){
    cin>>hv[i];
}
villain( hv , hh , h, v);

return 0; 
}