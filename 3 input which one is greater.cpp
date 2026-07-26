#include<iostream>
using namespace std;
int main()
{
//	Ques: Take 3 positive integers input and print the greatest of them.

 int a;
 cout<<"Enter 1st number: ";
 cin>>a;
 
 int b;
 cout<<"Enter 2nd number: ";
 cin>>b;
 
 int c;
 cout<<"Enter 3rd number: ";
 cin>>c;
 
 if(a>b and a>c)
 {
 	cout<<a<<" is greatest";
 }
 else if
 (b>a and b>c)
 {
 	cout<<b<<" is greatest";
 }

else
{
	cout<<c<<" is greatest";
}
}
