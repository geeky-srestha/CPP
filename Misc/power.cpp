//EXERCISE 1, PROGRAM 6

#include<iostream>
using namespace std;

double power(double n, int p=2)
{ 
 int total=1;
 while(p<0)
 {
  total+=total*n;
  p--;
 }
 return total;
}

int main()
{ 
  double n; int p;
  cout<<"Enter the value of n and p\n";
  cin>>n>>p;
  cout<<"Result with default arguments:\n";
  cout<<power(n);
  cout<<"Result without default arguments:\n";
  cout<<power(n,p);
}
