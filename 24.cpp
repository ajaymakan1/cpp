#include<iostream>
using namespace std;
int main(){
    
    int i,n; cin>>n; 
    int nums[100],target;
    cin>>target;
    for(int j=0;j<n;j++){
        cin>>nums[j];
    }
    for(int i=1;i<n;i++){
        if (nums[0]+nums[i]==target){
            cout<<"["<<0<<","<<i<<"]"<<endl;}

      else   if(nums[1]+nums[i]==target){
            cout<<"["<<1<<","<<i<<"]"<<endl;}
        
      else  if (nums[2]+nums[i]==target){
            cout<<"["<<2<<","<<i<<"]"<<endl;}
            
      else  if (nums[3]+nums[i]==target){
            cout<<"["<<3<<","<<i<<"]"<<endl;}
        
        //
        
    
}
 }