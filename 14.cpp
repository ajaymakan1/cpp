/*Print the following patterns using loop :
a.
*
**
***
****
b.
   *  
 *** 
*****
 *** 
   *  
c.
10101c.
1010101
 10101 
  101  
   1 
*/
   #include<iostream>

   using namespace std;
   
    int main(){
   
    for(int i = 1; i<=4; i++)

      {      for(int s = i; s <4 ; s++)
                    cout << " ";
     
                 for(int j= 1; j<=(2*i-1); j++){
                    cout<< "*";
        }
        cout<<"\n";
    }

    for(int i = 1; i<4; i++)

      {      for(int s = i; s <3 ; s++)
                    cout << " ";
     
                 for(int j= 1; j=2*i-1; j++){
                    cout<< "*";
        }
        cout<<"\n";
    }
    }



