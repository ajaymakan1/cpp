//Take input of age of 3 people by user and determine oldest and youngest among them.
#include<iostream>
using namespace std;
int main(){
int a,b,c; cin>>a; cin>>b; cin>>c;
if (a>b&&a>c&&b>c){
     cout<<"A is oldest and C is youngest"<<endl;
    }
if (a>b&&a>c&&c>b){
     cout<<"A is oldest and B is youngest"<<endl;
    }
if (b>a&&b>c&&a>c){
     cout<<"B is oldest and C is youngest"<<endl;
    }
if (b>a&&b>c&&a<c){
     cout<<"B is oldest and A is youngest"<<endl;
    }    
    
 if (c>b&&c>a&&b>a){
     cout<<"C is oldest and A is youngest"<<endl;
    } 
     
 if (c>b&&c>a&&b<a){
     cout<<"C is oldest and B is youngest"<<endl;
    }     
}