/*We want to calculate the total marks of each student of a class in Physics,Chemistry and Mathematics and
the average marks of the class. The number of students in the class are entered by the user.
Create a class named Marks with data members for roll number, name and marks.
 Create three other classes inheriting the Marks class, namely Physics, Chemistry and Mathematics,
 which are used to define marks in individual subject of each student.
 Roll number of each student will be generated automatically.*/

#include <iostream>
#include <string>
using namespace std;

class marks
{
public:
    int roll, mark;
    string name;
    void sd(){
    cout<<"Enter the name of the student : "<< name << endl;
    }
};
class physics : public marks
{public:
int p;
void phy(){int p;
    cin>>p;
    cout<<"Marks of" <<name<<"in physics are :" << p << endl;
}
};
class chemistry : public marks
{public:
    int c;
void che(){int c;
    cin>>c;
    cout<<"Marks of" <<name<<"in chemistry are :" << c << endl;
}
};
class maths : public marks
{public:
  int m; 

void mat(){ int m;
    cin>>m;
    cout<<"Marks of" <<name<<"in maths are :" << m << endl;
}
};
class avg : public physics,public chemistry, public maths
{public:

    void avr(){
        cout<< "Average marks of is" << (p+c+m)/3<<endl;
    }
};
int main()
{
    int n;
    cout << "Enter the number of students in the class : " << endl;
    cin >> n;
    avg z;
    marks p;
    physics a;
    chemistry b;
    maths m;
    for(int i=1;i<n+1;i++){
        cout << i ;
p.sd();
a.phy();
b.che();
m.mat();
z.avr();

    }

    return 0;
}
