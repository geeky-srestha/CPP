#include<iostream>
using namespace std;
int main()
{
char color;
cout<<"Enter the traffic signal:\n";
cin>>color;
switch(color)
{
case 1:
cout<<"Stop";
break;
case 2:
cout<<"Ready";
break;
case 3:
cout<<"Go";
break;
default:
cout<<"Wrong input!";
}
}

