//EXERCISE 1, PROGRAM 2

#include<iostream>
using namespace std;

void calculateVolume(int n)
{
 cout<<"Volume of Cube: ";
 cout<<(n*n*n)<<endl;
}

void calculateVolume(int l, int b, int h)
{
 cout<<"Volume of Rectangle: ";
 cout<<(l*b*h)<<endl;
}

void calculateVolume(float radius, int height)
{
 cout<<"Volume of Cylinder: ";
 cout<<(3.14*radius*radius*height)<<endl;
}

int main()
{
 int side;
 cout<<"Enter the side of cube\n";
 cin>>side;
 calculateVolume(side);
  
 int l,b,h;
 cout<<"Enter l,b,h\n";
 cin>>l>>b>>h;
 calculateVolume(l,b,h);
 
 float radius; int height;
 cout<<"Enter the radius and height\n";
 cin>>radius>>height;
 calculateVolume(radius,height);
}
 
 
 
 
