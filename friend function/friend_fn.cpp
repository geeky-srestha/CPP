#include <iostream>
#include <string>
using namespace std;
class Scholarship;
class Student
{
    float marks;
    int attendance;
    string name;

    public:
    void input()
    {
        cout<<"Enter the name of the student\n";
        cin>>name;
        cout<<"Enter the attendance\n";
        cin>>attendance;
        cout<<"Enter marks\n";
        cin>>marks;
    }
   
    friend void scholarship(Student,Scholarship);
};

class Scholarship
{
    int minattendance;
    int minmarks;

    public:
    void input()
    {
        cout<<"Enter min. attendance require to be eligible for scholarship\n";
        cin>>minattendance;
        cout<<"Enter min. marks require to be eligible for scholarship\n";
        cin>>minmarks;
    }
    friend void scholarship(Student,Scholarship);
};

void scholarship(Student s, Scholarship sp)
{
    if((s.marks>=sp.minmarks)&&(s.attendance>=sp.minattendance))
    {
        cout<<"The student is eligile for the scholarhip"<<endl;
    }
}

int main()
{
 Student s;
 Scholarship sp;
 s.input();
 sp.input();
 scholarship(s,sp);
}
