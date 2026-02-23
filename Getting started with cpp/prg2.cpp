#include<iostream>
#include<string>
using namespace std;
class CarPark
{
 string Num;
 float charge;
 float duration;
 float cost;
  public:
  void input()
  {
   cout<<"Enter the Car Registration Number"<<endl;
   getline(cin, Num);
   cout<<"Enter charge per hour"<<endl;
   cin>>charge;
   cout<<"Enter parking duration"<<endl;
   cin>>duration;
  }
  void calc()
  {
   cost=charge*duration;
  }
  void display()
  {
   cout<<"Car Regn No. : "<<Num<<endl;
   cout<<"Parking hours : "<<duration<<endl;
   cout<<"The total charges are: "<<cost<<endl;
  }
};
int main()
{
CarPark p1;
p1.input();
p1.calc();
p1.display();
}
   
   
   
   
   
