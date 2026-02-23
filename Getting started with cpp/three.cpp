//Welcome to C++ Programing
#include<iostream>
using namespace std;
int main()
{
int totalc, attendedc;

cout<<"Enter Total Classes";
cin>>totalc;
cout<<"Enter Attended Classes";
cin>>attendedc;
float percentage=(float)(attendedc/totalc)*100;
if(percentage>=75)
cout<<"Eligible";
else
cout<<"Not Eligible";
}

