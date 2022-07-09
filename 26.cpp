/* 

Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.


Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.*/


#include<iostream>
using namespace std;
int main(){
int n,m,i=0,j=0,k=0; double median; cin>>n>>m;
int l=m+n;
int a[1000],b[2000],merged[30000];
for (int i = 0; i < n; i++)
{
  cin>>a[i];
}
for (int j = 0; j < m; j++)
{
    cin>>b[j];
}


   while(i<n && j<m)
    
    
{
  if(a[i]<b[j]){
   merged[k]=a[i];
     i++;k++;}

  else {
   merged[k]=b[j];
   j++; k++;

} 
}
while(i<n)
merged[k++]=a[i++];
while(j<m)
merged[k++]=b[j++];

for (int t = 0; t < m+n; t++)
{
  cout<<merged[t]<< " ";
}
cout<<endl;
cout<<((l)/2)+1<<endl;
if((l)%2!=0)
{
    median=merged[((l)/2)];
    cout<<median<<endl;
    cout<<"one"<<endl;

}
else {
float median=(merged[((l)/2)]+merged[((l)/2)-1])/2;
    cout<<median<<endl;
    cout<<"two"<<endl;
}
} 




