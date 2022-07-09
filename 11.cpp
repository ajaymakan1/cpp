/*A 4 digit number is entered through keyboard. Write a program to print a new number with digits reversed as of orignal one. E.g.-
INPUT : 1234        OUTPUT : 4321
INPUT : 5982        OUTPUT : 2895*/

#include<iostream>
using namespace std ;
int main(){
int n,a,b,c,d,e,f,g; cin>>n;
if(n>=1000){
    d=n%1000; a=n/1000;
    e=d%100;  b=d/100;
    f=e%10;   c=e/10;
    g=f%1;    d=f/1;
    cout<<"the reverse no of " << n << " is: "<<d<<c<<b<<a<<endl;
    /*
cout<<"the reverse no of" <<n<< "is: "<<c;
cout<<"the reverse no of" <<n<< "is: "<<b;
cout<<"the reverse no of" <<n<< "is: "<<a;*/

}
else { cout<<" Number entered by you is a negative number or less than 1000 ,please enter a positive number or number greater than 1000"<<endl;}

}