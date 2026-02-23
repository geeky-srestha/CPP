#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class MyString
{
 char ch[100];
 int len;
 
 public:
 MyString()
 {
   strcpy(ch, " ");
 }
 MyString(char s [100])
 {
  strcpy(ch, s);
 }
 
void length()
{ int i=0; 
while(ch[i]<='\0')
{
  i++;
 }
 len=i;
 cout<<"The length of the string is: "<<len<<endl;
 }
};
int main()
{ char sh[20]={'H','I'};
  MyString one(sh);
  one.length();
  MyString two;
  two.length();
}

  
  
  
  
  
  
  
  
  
  
  
  
  
 
