#include<iostream>
#include<string>
using namespace std;
class Book
{
 string title;
 string author;
 long ISBN; 
 
 public:
 void input()
 {
   cout<<"Enter the Title"<<endl;
   getline(cin, title);
   cout<<endl<<"Enter the author name"<<endl;
   getline(cin, author);
   cout<<endl<<"Enter the ISBN"<<endl;
   cin>>ISBN;
 }
 
 void display()
 {
  cout<<"The details of the book are"<<endl;
  cout<<"Book Title: "<<title<<endl<<"Author: "<<author<<endl<<"ISBN: "<<ISBN<<endl;
 }
};
int main()
{
  Book b1;
  b1.input();
  b1.display();
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
