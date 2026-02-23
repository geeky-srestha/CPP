#include<iostream>
using namespace std;
int main()
{
 int n;
 cout<<"Enter number of passengers:\n";
 cin>>n;
 int cost=n*50;
 
 if(n>=5)
 {
  cost=cost-((cost*10)/100);
 }
 cout<<"Total cost: " <<cost;
}
