/*A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.**/
#include<iostream>
using namespace std ;
int main(){
    
int held,attend,percentage,mi; cin>>held; cin>>attend;
percentage=(attend*100)/held;
int m;
    cout<<"type your medical reason in y or n: "<<endl;
    cin>>m;

cout<<"class attend percentage: "<<percentage<<endl;
if(percentage>75 || m==1 )
cout<<"You are allowed to sit in the exam "<<endl;
else 
cout<<"You are not allowed to sit in the exam "<<endl;
}