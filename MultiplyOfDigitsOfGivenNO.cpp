#include<iostream>
using namespace std;
int main()
{
//	Ques: WAP to print product of digits of a given number.There wont be the 0 in number.
 int n;
 cout<<"Enter number: ";
 cin>>n;
 int ld; //ld mean last digit
 int multi=1
 ;
 while(n!=0)
 {
 	ld=n%10;
 	n=n/10;
 	multi=multi*ld;
 }
 cout<<"The multiplication of these numbers is: "<<multi;
 return 0;
}
