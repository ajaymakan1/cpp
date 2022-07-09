//A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
//Ask user for their salary and year of service and print the net bonus amount.
#include<iostream>
using namespace std ;
int main(){
    int salary , year_of_service ; cin>>salary; cin>>year_of_service ;
if (year_of_service > 5)
{
    cout<<"congrats! you got 5% bonus and now your net bonus amount is :"<<(salary+salary/20)<<endl;}
    else{
       cout<<" your year of service is less than  5 year so you did not get any bonus and now your net bonus anount is :"<< salary<< endl;

    }

}