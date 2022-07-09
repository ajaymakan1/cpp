/*Write a program to print absolute vlaue of a number entered by user. E.g.-
INPUT: 1        OUTPUT: 1
INPUT: -1        OUTPUT: 1
#include<iostream>
using namespace std ;
int main(){
int num; cin>>num;

if (num<0){
    cout<<"Absolute value of number is: "<<num*(-1)<<endl;
}
else cout<<"Absolute value of number is: "<<num<<endl;
}

If
x = 2
y = 5
z = 0
then find values of the following expressions:
a. x == 2
b. x != 5
c. x != 5 && y >= 5
d. z != 0 || x == 2
e. !(y < 10)  

#include<iostream>
using namespace std;
int main(){

int x=2,y=5,z=0;
cout<<"the value of expression is a:"<< (x==2) <<endl;
cout<<"the value of expression is b:"<< (x!=5) <<endl;
cout<<"the value of expression is c:"<< (x != 5 && y >= 5) <<endl;
cout<<"the value of expression is d:"<< (z != 0 && x == 2) <<endl;
cout<<"the value of expression is e:"<< (!(y < 10) ) <<endl;
}
Write a program to check whether a entered character is lowercase ( a to z ) or uppercase ( A to Z ).



#include<iostream>
//#include<conio.h>
using namespace std;
int main(){
char ch;
cin>>ch;

if(ch>=A&&ch<=Z)

{
cout<<"Entered character is in uppercase"<<ch<<endl;
}

else if (ch>=a&&ch<=z)
{
cout<<"Entered character is in lowercase"<<ch<<endl;

else
 {
cout<<"entered value is not a character"<<ch<<endl;}
    
        

}

}*/
#include <iostream>
using namespace std;
int main()
{
    char ch;//Variable declaration
    cout<<"Enter a character: ";
     cin>>ch;//store the entered character
     if(ch>='A' && ch<='Z'){//check upper case
    cout<<ch<<" is an upper case letter ";
}
else if(ch>='A' && ch<='z'){//check lower case
    cout<<ch<<" is a lower case letter ";
}
else{
    cout<<ch<<" is not an Alphabets ";
}

    return 0;
}



