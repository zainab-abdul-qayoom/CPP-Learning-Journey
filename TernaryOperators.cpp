#include<iostream>
using namespace std;
int main()
{
	//Ternary Operator: just like a if-else but reduced the lines as compared to else if.
//	syntax:
//		expresion?  expresion: expression;
// only for 2 things if and else

int n;
cout<<"Enter number: ";
cin>>n;
//condition?     If true:            If false;
(n%2==0)? cout<<"Even number": cout<<"Odd number";
		
	
}
