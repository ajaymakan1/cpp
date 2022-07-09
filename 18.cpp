//Write a program to find greatest common divisor (GCD) or highest common factor (HCF) of given two numbers

#include<iostream>
using namespace std ;

int main (){
    int a,hcf,b ;
cin>>a>>b;
 
 if(b>a){
     int temp=b;
     b=a;
     a= temp;}
      for (int i = 1; i <=  b; ++i) {
    if (a % i == 0 && b % i ==0) {
      hcf = i;
    }
  }
cout <<hcf;

return 0;
 }


 
    
