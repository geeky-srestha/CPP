#include<iostream>
using namespace std;
int main()
{
 int sal;
 cout<<"Enter the base salary:\n";
 cin>>sal;
 int isal=sal;
 int year;
 cout<<"Enter the number of years:\n";
 cin>>year;
 int ts;
 int ssal=0;
 for(int i=2;i<=year;i++)
 {
  ssal+=sal+((sal*5)/100);
 }
 ts=isal+ssal;
 cout<<"FINAL SALARY: "<<ts;
}
