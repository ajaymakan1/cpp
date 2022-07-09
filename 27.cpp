/*You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of 

the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

*/

#include<iostream>
using namespace std;
int sum (int a[5]){
 int c[5],i;
 for(int i=0;i<5;i++)
 int c[i]= ( a[i]+1);
 return c;
}
int main(){
int b[5],j;
for (int j = 0; j < 5; j++)
{
  cin>>b[j];
}

cout<<sum(b[j]);



}