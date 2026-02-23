#include<iostream>
using namespace std;
int main()
{
 int days;
 int fine;
 cout<<"Enter number of days:\n";
 cin>>days;
 
 if(days<=5)
 {
  fine=days*1;
 }
 else if(days<=10)
 {
   int d1=days-5;
   int d2=days-d1
  fine=(d1*1)+(d2*2);
 }
 else
 {
  int remdays=days-5;
  int adndays=days-remdays;
  fine=(days*1)+(remdays*2)+(adndays*5);
 }
  cout<<"Total Fine:\n"<<fine;
}

