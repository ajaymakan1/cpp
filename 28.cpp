#include<iostream>
using namespace std;

class Factorial
{  
    int n,f=1;

public:
  Factorial(int a){
      n=a;
  }
  
    void fact(){

        for(int i=1;i<=n;i++){
            f=f*i;

        }cout<<f<<endl;
    }
};
int main(){
    int n;
    cin>>n;
    Factorial fun(n);
    fun.fact();
    return 0;
   
}

