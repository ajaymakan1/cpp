/*Write a program to print the area of a rectangle by creating a class named 'Area' having two functions.
First function named as 'setDim' takes the length and breadth of the rectangle as parameters and the
second function named as 'getArea' returns the area of the rectangle. 
Length and breadth of the rectangle are entered through keyboard. */


#include<iostream>
#include<string>
using namespace std;

class Area {
    int x,y;

public: 

void setDim(int a , int b){
 x=a;
 y=b;

}
int getArea(){
    return x*y;
  
}


};
int main(){
    int c,d;
    cin>>c; cin>>d;
    Area a;
    a.setDim(c,d);
   cout<< a.getArea()<<endl;
}
    
        