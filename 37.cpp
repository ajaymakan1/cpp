// Print the average of three numbers entered by the user by creating a class named 'Average' 
//having a function to calculate and print the average without creating any object of the Average class.


#include<iostream>
#include<string>
using namespace std;
 
class Average {
int a, b,c;
float avg;
public:

Average(void);
void print(void){
    float t;
    t=a+b+c;
    avg=t/3;
    cout << "Average of the number entered by you is :"<< avg << endl;
}


};

Average :: Average(void){
    cin>>a;cin>>b;cin>>c;
}

int main(){
Average A;
A.print();
return 0 ;
}