//EXERCISE 1, PROGRAM 1

#include<iostream>
using namespace std;
void getinput(int &a, int &b)
{
 cout<<"Please enter the two intergers";
 cin>>a>>b;
}

void swap(int &a, int &b)
{
 int temp;
 temp=a;
 a=b;
 b=temp;
}
 
int main()
{
 int a,b;
 getinput(a, b);
 cout<<"Value before swapping a=  b=  "<<a<<"\t"<<b;
 swap(&a, &b);
 cout<<"Value after swapping a=  b=  "<<a<<"\t"<<b;
}

