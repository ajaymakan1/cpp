#include<iostream>
#include<string>
using namespace std;

class binary{
    public:

    string s;
    void get(void);
    void chk_bin(void);
    void once(void);
    void display(void);
};

void binary :: get(void){
    cout<<"Enter a binary number " << endl;
    cin>>s;
}
void binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
      if (s.at(i)!='0' && s.at(i)!='1'){
      cout<<"invalid binary code"<<endl; 
      exit(0);  
    }
    }
}
void binary :: once(void) {

    for (int i = 0; i < s.length(); i++){


    for (int i = 0; i < s.length(); i++){

        if(s.at(i)=='0')
         {s.at(i)= '1';}
        
         else
         {
             s.at(i)='0';
         }
         
      
    }
}
}
void binary :: display(void){

    for (int i = 0; i < s.length(); i++)
    {
       cout<<s.at(i);
          /* code */
    } cout<<endl;
    
}



int main(){
    binary b;
    b.get();
    b.chk_bin();
    b.once();
    b.display();

}