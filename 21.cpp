//A three digit number is called Armstrong number if sum of cube of its digit is equal to number itself.
//E.g.- 153 is an Armstrong number because (13)+(53)+(33) = 153.
//Write all Armstrong numbers between 100 to 500.

#include<iostream>
using namespace std;
int main (){
    for(int i=101;i<500;i++)
    {
        int sum = 0;
        int t = i;
        while(t!=0)
        {
            sum = sum+((t%10)*(t%10)*(t%10));
            t = t/10;
        }
        if(sum == i)
        {
            cout << i <<"\n";
        }
    }
    return 0;
}

 /*int n,c,d,e,f,g,h,t,m=101;
 for (int i = 101; i<500;i++){
c=i%100; d=i/100;
e=c%10; f= c/10;
g=e%1; h=e/1;
h++;
 }
 t=d*d*d+f*f*f+h*h*h;
 cout<<t<<endl;
 if (t==m){
 cout<< n << "is a armstrong number "<< endl;}


else{
    cout<<"please enter the number between 100 to 500 " <<endl;
}*/

