#include<iostream>
using namespace std;
int main(){
 int num[1000],sum=0,i ;
 int n; cin>>n;
 for(int i=0;i<n;i++){
  cin>>num[i];
    }

    for(int j=0;j<n;j++){
        sum=sum+num[j];
        cout<<sum<<endl;
    }

}
