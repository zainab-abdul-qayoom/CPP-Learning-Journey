#include<iostream>
using namespace std;
int main()
{
	/*Arithmetic operators:
		5 types of Arithmetic operators:
			1.Addition +
			2. Substraction -
			3. Multiplication *
			4. Division /
			5. Remainder or Modulus % */
			
			
			
	  int a,b,add,sub,multi,remd;
	  float div;
	  
	  cout<<"\n \t CALCULATOR";
	  cout<<"\n \t ============";
	  cout<<"\n \t Enter the value of a..........";
	  cin>>a;
	  cout<<"\n \t Enter the value of b..........";
	  cin>>b;
	  add = a+b;
	  cout<<"\n \t Addition of "<<a<<" and "<<b<<" is...."<<add;
	  
	  sub=a-b;
	  cout<<"\n \t Substraction of "<<a<<" and "<<b<<" is...."<<sub;
	  
	  multi=a*b;
	  cout<<"\n \t Multiplication of "<<a<<" and "<<b<<" is...."<<multi;
	  
	  div=a/b;
	  cout<<"\n \t Division of "<<a<<" and "<<b<<" is...."<<div;
	  
	  remd=a%b;
	  cout<<"\n \t Remainder of "<<a<<" and "<<b<<" is...."<<remd;
	  
	  return 0;
	  
	  
	  
	  
}
