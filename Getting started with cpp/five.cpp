#include<iostream>
using namespace std;
int main()
{ 
int PIN;
int correctpin=1111;
int n=0;
while(n<3)
{
 cout<<"Enter the pin:\n";
 cin>>PIN;
 if(PIN==correctpin)
 {
  cout<<"Access Granted\n";
  return 0;
 }
 else
 {
  cout<<"Access Blocked\n";
  n++;
 }
}
}
