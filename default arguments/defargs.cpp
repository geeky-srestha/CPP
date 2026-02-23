//EXERCISE 1, PROGRAM 5

#include<iostream>
using namespace std;

void computeVolume(int radius=4.5, int height=7)
{
 cout<<"Radius of the cylinder is: "<<(3.14*radius*radius*height);
 cout<<endl;
}

int main()
{
 int radius;
 cout<<"Enter the radius: \n";
 cin>>radius;
 
 int height;
 cout<<"Enter the height: \n";
 cin>>height;
 
 computeVolume();              //with default arguments.
 computeVolume(radius);        //with one default argument.
 computeVolume(radius,height); //with no default arguments.
}
