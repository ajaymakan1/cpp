/*A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user.*/


#include<iostream>
using namespace std ;
int main(){
    cout<<"Enter the quantity: ";
    int q; cin>>q;
    if(q>1000){
 cout<<"Congratulations ! You got 10% discount and your total amount to pay is :"<< (q-q/10) << endl;
 }
 else{
     cout<<"you have to pay :"<<q<<endl;       
    }
}
