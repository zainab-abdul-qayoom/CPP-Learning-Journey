#include<iostream>
using namespace std;
int main()
{
	double a,b,math;
	cout<<"\n \t calculate the mathematical expression: ";
	cout<<"\n \t ======================================";
	cout<<"\n \t Enter the value of a: ";
	cin>>a;
	cout<<"\n \t Enter the value of b: ";
	cin>>b;
	math = a*a + 2*a*b + b*b;
	cout<<"\n \t The answer according to this formula (a*a + 2*a*b + b*b) is: "<<math;
	cout<<"\n \t ==================================================================";
	return 0;
	
}
