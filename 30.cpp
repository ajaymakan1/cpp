//Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units
// by creating a class named 'Triangle' with a function to print the area and perimeter.

#include<iostream>
#include<math.h>
using namespace std;

class Triangle{
  int a,b,c,p,s;
  float t;

public:
  
  Triangle(int j,int k, int l){
      a=j; b=k; c=l;

  }
  void perimeter (){
   p=a+b+c;
   cout<<p<<endl;
  }
  void area (){
      s=(a+b+c)/2;
      t = (s*(s-a)*(s-b)*(s-c))^.5;
      cout<<t<<endl;
  }
};
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    Triangle z(a,b,c);
    z.perimeter();
    z.area(a,b,c);
    return 0;
    
}
