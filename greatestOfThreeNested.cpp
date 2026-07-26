#include<iostream>
using namespace std;
int main()
{
//	Ques: Take 3 positive integers input and print the greatest of them without using multiple conditions.
  
   int a;
 cout<<"Enter 1st number: ";
 cin>>a;
 
 int b;
 cout<<"Enter 2nd number: ";
 cin>>b;
 
 int c;
 cout<<"Enter 3rd number: ";
 cin>>c;
 
 // a>b and a>c ==> a>c ==>a is greatest.
 
 if(a>b)  //b can never be the greatest
 {
   	if(a>c)
   	cout<<a<<" is greatest";
   	
   	else //c>a  a>b ==> c>a>b
   	{
   		cout<<c<<" is greatest";
	 }
 }
 
 
 
 else //b>a
 {
 	if(b>c)
 	{
 		cout<<b<<" is greatest";
	 }
	else //c>b, c>b>a
	{
		 cout<<c<<" is greatest";
	}
 }
 
 return 0;
}
