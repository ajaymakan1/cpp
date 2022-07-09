// Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'. 
// Assign the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.


#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    string name,address;
    int roll_no;

};
int main(){
  

    Student s,r;
  
    s.name = "John";
    s.roll_no = 2;
    s.address = "bsr";

  r.name = "KP";
    r.roll_no = 1;
    r.address = "deelhi";

    cout << s.name << " " << s.roll_no <<" "<< s.address << endl;
    cout << r.name << " " << r.roll_no << " " << r.address << endl;
    return 0;



}