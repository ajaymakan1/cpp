//Take two int values from user and print greatest among them.
#include<iostream>
using namespace std;
int main(){
cout<<"enter two integer values"<<endl;
int a,b;
cin>>a; cin>>b;
if(a>b){
    cout<<"the greatet integer is:"<< a <<endl;
}
else if(a==b){cout<<"both integer are same:"<< a <<endl;}
else{cout<<"the greatet integer is:"<< b << endl;
}



}