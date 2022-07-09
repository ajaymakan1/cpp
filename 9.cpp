//program to check for a leep year
#include<iostream>
using namespace std;
int main(){
    int yr;cin>>yr;

  if ((yr % 4 == 0 && yr % 100 != 0) || yr % 400 == 0) {
    cout << yr << " is a leap year.";}
    else{
        cout<<yr<<"is non leap year";
    
    
}}