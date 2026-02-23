#include<iostream>
#include<string>
using namespace std;
class BankAccount
{
  long num;
  string name;
  float bal;
  
  public:
  BankAccount(int num1, string name1)
  { 
    num=num1;
    name=name1;
    bal=0;
  }
  BankAccount(int num1, string name1, float bal1)
  {
    num=num1;
    name=name1;
    bal=bal1;
  }
 
 void deposit()
 { float amt;
  cout<<"Enter the amount to be deposited"<<endl;
  cin>>amt;
  bal+=amt;
 }
 void withdraw()
 {
  float amt;
  cout<<"Enter the amount to be withdrawn"<<endl;
  cin>>amt;
  bal-=amt;
 }
 void display()
 {
   cout<<"Details of the customer are: "<<endl<<"Account Holder Name: "<<name<<endl<<"Account Number : "<<num<<endl<<"Outstanding Balance: "<<bal<<endl;
 }
};
 
int main()
{
BankAccount one(12345,"Srestha");
BankAccount two(56789,"Pranav",5000);
one.deposit();
one.withdraw();
one.display();
cout<<endl;
two.display();
}
  
 
 

