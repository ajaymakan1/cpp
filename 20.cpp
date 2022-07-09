//Take as input a fraction in the form a/b. Convert the same into lowest terms and print. (Lowest terms examples 3/12 = 1/4).

#include<iostream>
using namespace std;
int main(){
int a,b,n;
cin>>a>>b;
if (a>b){
    n=b;}
    else{
    n=a;    
}
for (n; n >= 1; n--)
    {
        if ((a % n == 0) && (b % n == 0))
        {
            a = a / n;
            b = b / n; 
        }
        
    }

    cout << a << "/" << b;

    return 0;



}


