#include<iostream>
using namespace std;
int main()
{
 int bill;
 int tc;
 cout<<"Enter total bill amount:\n";
 cin>>bill;
 if(bill<5000)
 {
  tc=bill-((bill*5)/100);
 }
 else
 {
  tc=bill-((bill*10)/100);
 }
cout<<"Final bill after dicount: "<<tc;
}
