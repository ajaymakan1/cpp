#include<iostream>
#include<string>
#include<array>
using namespace std;
void print(int array[], int n)
{
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
}
void take(int array[], int n)
{
    for (int i = 0; i < n; i++)
         cin>>array[i];
}

void merge(int l[],int r[],int a[]){
    int nl,nr;
    nl=sizeof(l)/sizeof(l[0]);
    nr=sizeof(r)/sizeof(r[0]);
    int i=0,j=0,k=0;
    while(i<nl&&j<nr){
        if(l[i]<r[j]){
            a[k]=l[i];
            k=k+1;
            i=i+1;
        }
        else 
        {a[k]=r[j];
        k=k+1;
        j=j+1;}

    while(i<nl){
        a[k]=l[i];
        i=i+1;
        k=k+1;
    }    
    while(j<nr){
        a[k]=r[j];
        j=j+1;
        k=k+1;
    }

    }
    }
int mergesort(int a[]){
    int len,mid,l[1000],r[1000];
    len= sizeof(a)/sizeof(a[0]);
    if (len<2){
        return 1;
    }
    mid = len/2;
    for( int i=0;i<mid-1;i++){
        l[i]=a[i];
    }
 
    for( int j=mid;j<len-1;j++){
        l[j]=a[j];
    }
    mergesort(l);
    mergesort(r);
    merge(l,r,a);
} 

int main(){
int a[1000],l[1000],r[1000];
int n;
cin>>n;
take(a,n);
mergesort(a);
print(a,n);
return 0; 
}