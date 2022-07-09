//Write a program to print all prime number in between 1 to 100

#include<iostream>
using namespace std;
int main(){
int i,num,c;
for(num = 1 ; num<100; num++){
c=0;
for(i=2;i<=num/2;i++){
    if(num%i==0){
        c++;
        break;
      } 
    }
    if (c==0&&num!=1)
    cout<<num<<endl;
}

}